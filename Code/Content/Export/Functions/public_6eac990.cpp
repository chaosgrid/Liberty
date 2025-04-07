#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6eac990);

#define public_6eac9c0 _public_6eac9c0

PROC_DECLARE(0x6eac990, internal_6eac990, public_6eac990);
extern "C" NAKED register_t __cdecl internal_6eac990()
{
    __asm
    {
        push ebx
        push ebp
        xor ebx, ebx
        mov al, 1
        push esi
        mov esi, ecx
        mov byte ptr ds : [esi+4], al
        mov byte ptr ds : [esi+6], al
        mov byte ptr ds : [esi+0x10], al
        push edi
        mov dword ptr ds : [esi], ebx
        mov byte ptr ds : [esi+5], bl
        mov dword ptr ds : [esi+8], ebx
        mov dword ptr ds : [esi+0xC], ebx
        mov dword ptr ds : [esi+0x114], ebx
        lea eax, ds:[esi+0x198]
        mov ecx, 0x20
        nop 
        public_6eac9c0 : nop
        mov dword ptr ds : [eax-0x80], ebx
        mov dword ptr ds : [eax], ebx
        add eax, 4
        dec ecx
        jne public_6eac9c0
        mov ebp, dword ptr ds : [public_6fb3068]
        lea edi, ds:[esi+0x228]
        mov ecx, edi
        mov dword ptr ds : [esi+0x218], ebx
        mov dword ptr ds : [esi+0x21C], ebx
        mov dword ptr ds : [esi+0x220], ebx
        mov dword ptr ds : [esi+0x224], ebx
        call ebp
        xor eax, eax
        mov ecx, 6
        rep stosd
        lea edi, ds:[esi+0x240]
        mov ecx, edi
        call ebp
        mov ecx, 6
        xor eax, eax
        rep stosd
        pop edi
        mov dword ptr ds : [esi+0x258], ebx
        mov dword ptr ds : [esi+0x25C], ebx
        pop esi
        pop ebp
        pop ebx
        ret 
        UNREACHABLE_TRAP(0x6eac990)
    }
}

#undef public_6eac9c0
