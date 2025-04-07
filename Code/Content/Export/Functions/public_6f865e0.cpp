#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f865e0);

PROC_DECLARE(0x6f865e0, internal_6f865e0, public_6f865e0);
extern "C" NAKED register_t __cdecl internal_6f865e0()
{
    __asm
    {
        push ecx
        push ebx
        xor ebx, ebx
        push esi
        mov esi, ecx
        mov byte ptr ds : [esi], 1
        mov byte ptr ds : [esi+1], bl
        mov byte ptr ds : [esi+2], bl
        mov dword ptr ds : [esi+4], ebx
        or ecx, 0xFFFFFFFF
        mov dword ptr ds : [esi+8], ecx
        mov dword ptr ds : [esi+0xC], ebx
        mov dword ptr ds : [esi+0x2C], ebx
        mov dword ptr ds : [esi+0x28], ebx
        mov dword ptr ds : [esi+0x24], ebx
        mov dword ptr ds : [esi+0x1C], ebx
        mov dword ptr ds : [esi+0x18], ebx
        mov dword ptr ds : [esi+0x14], ebx
        mov eax, 0x3F800000
        mov dword ptr ds : [esi+0x30], eax
        mov dword ptr ds : [esi+0x20], eax
        mov dword ptr ds : [esi+0x10], eax
        mov dword ptr ds : [esi+0x3C], ebx
        mov dword ptr ds : [esi+0x38], ebx
        mov dword ptr ds : [esi+0x34], ebx
        mov eax, dword ptr ds : [public_6fbc2e8]
        mov dword ptr ds : [esi+0x40], eax
        mov dword ptr ds : [esi+0x44], ebx
        mov byte ptr ds : [esi+0x48], bl
/*FIXUP push offset public_6fb85c4 @0x6f86633*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fb85c4
        mov dword ptr ds : [esi+0x78], ebx
        mov dword ptr ds : [esi+0x7C], ecx
        call dword ptr ds : [public_6fb3000]
        mov cl, byte ptr ss : [esp+0xF]
        mov dword ptr ds : [esi+0x80], eax
        mov dword ptr ds : [esi+0x88], ebx
        mov dword ptr ds : [esi+0x8C], ebx
        mov dword ptr ds : [esi+0x90], ebx
        mov byte ptr ds : [esi+0x84], cl
        mov eax, dword ptr ds : [public_6fd3c08]
        add esp, 4
        inc eax
        mov dword ptr ds : [public_6fd3c08], eax
        mov dword ptr ds : [esi+0x94], eax
        mov eax, esi
        pop esi
        pop ebx
        pop ecx
        ret 
        UNREACHABLE_TRAP(0x6f865e0)
    }
}
