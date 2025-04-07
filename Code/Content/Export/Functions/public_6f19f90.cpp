#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f19f90);

#define public_6f1a007 _public_6f1a007

PROC_DECLARE(0x6f19f90, internal_6f19f90, public_6f19f90);
extern "C" NAKED register_t __cdecl internal_6f19f90()
{
    __asm
    {
        push ebx
        push esi
        mov esi, ecx
        xor ebx, ebx
        lea ecx, ds:[esi+8]
        mov byte ptr ds : [esi+4], bl
        call dword ptr ds : [public_6fb3030]
        mov eax, dword ptr ss : [esp+0xC]
        mov dword ptr ds : [esi+0x14], eax
        mov dword ptr ds : [esi+0xC], ebx
        mov dword ptr ds : [esi+0x10], 0xFFFFFFFF
        mov dword ptr ds : [esi+0x18], ebx
        mov dword ptr ds : [esi+0x1C], 1
        mov dword ptr ds : [esi+0x20], ebx
        mov dword ptr ds : [esi+0x24], ebx
        mov byte ptr ds : [esi+0x28], bl
        mov byte ptr ds : [esi+0x29], bl
        mov byte ptr ds : [esi+0x2A], bl
        mov byte ptr ds : [esi+0x2B], bl
        mov byte ptr ds : [esi+0x2C], bl
        mov byte ptr ds : [esi+0x2D], bl
        mov byte ptr ds : [esi+0x2E], bl
        mov byte ptr ds : [esi+0x2F], bl
        mov byte ptr ds : [esi+0x30], bl
        mov byte ptr ds : [esi+0x31], bl
        mov byte ptr ds : [esi+0x32], bl
        mov byte ptr ds : [esi+0x33], bl
        mov byte ptr ds : [esi+0x34], bl
        mov byte ptr ds : [esi+0x35], bl
        mov eax, dword ptr ds : [esi+0x14]
        cmp eax, ebx
        mov dword ptr ds : [esi], offset public_6fb8ccc
        mov dword ptr ds : [esi+0x1C], 4
        je public_6f1a007
        mov ecx, dword ptr ds : [eax+8]
        mov dword ptr ds : [esi+0x18], ecx
        public_6f1a007 : nop
        mov eax, esi
        pop esi
        pop ebx
        ret 4
        UNREACHABLE_TRAP(0x6f19f90)
    }
}

#undef public_6f1a007
