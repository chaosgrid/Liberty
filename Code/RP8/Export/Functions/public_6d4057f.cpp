#include "RP8-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d4057f);

#define public_6d405af _public_6d405af
#define public_6d405b8 _public_6d405b8

PROC_DECLARE(0x6d4057f, internal_6d4057f, public_6d4057f);
extern "C" NAKED register_t __cdecl internal_6d4057f()
{
    __asm
    {
        mov eax, dword ptr ds : [esi]
        push ebx
        mov dword ptr ds : [eax+0x14], 0x65
        mov eax, dword ptr ds : [esi]
        push 1
        push esi
        call dword ptr ds : [eax+4]
        mov eax, dword ptr ds : [esi+0x190]
        xor ebx, ebx
        cmp byte ptr ds : [eax+0x50], bl
        pop ecx
        pop ecx
        je public_6d405af
        mov eax, dword ptr ds : [esi]
        mov dword ptr ds : [eax+0x14], 0x3C
        mov eax, dword ptr ds : [esi]
        push esi
        call dword ptr ds : [eax]
        pop ecx
        public_6d405af : nop
        push 0x10
        lea eax, ds:[esi+0xDA]
        pop ecx
        public_6d405b8 : nop
        mov byte ptr ds : [eax-0x10], bl
        mov byte ptr ds : [eax], 1
        mov byte ptr ds : [eax+0x10], 5
        inc eax
        dec ecx
        jne public_6d405b8
        mov eax, dword ptr ds : [esi+0x190]
        mov dword ptr ds : [esi+0xFC], ebx
        mov dword ptr ds : [esi+0x24], ebx
        mov byte ptr ds : [esi+0x108], bl
        mov byte ptr ds : [esi+0x100], bl
        mov byte ptr ds : [esi+0x101], bl
        mov byte ptr ds : [esi+0x106], bl
        mov byte ptr ds : [esi+0x107], bl
        mov word ptr ds : [esi+0x102], 1
        mov word ptr ds : [esi+0x104], 1
        mov byte ptr ds : [eax+0x50], 1
        mov al, 1
        pop ebx
        ret 
        UNREACHABLE_TRAP(0x6d4057f)
    }
}

#undef public_6d405af
#undef public_6d405b8
