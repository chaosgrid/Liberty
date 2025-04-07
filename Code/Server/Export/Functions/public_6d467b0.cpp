#include "Server-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d467b0);

#define public_6d467f4 _public_6d467f4
#define public_6d46824 _public_6d46824
#define public_6d4683e _public_6d4683e

PROC_DECLARE(0x6d467b0, internal_6d467b0, public_6d467b0);
extern "C" NAKED register_t __cdecl internal_6d467b0()
{
    __asm
    {
        push ebx
        push esi
        mov esi, ecx
        mov al, byte ptr ds : [esi+0x414]
        test al, al
        mov ebx, dword ptr ds : [esi+0x410]
        push edi
        jne public_6d467f4
        mov edx, dword ptr ds : [esi+0x404]
        lea ecx, ds:[edx-1]
        mov eax, 1
        shl eax, cl
        mov ecx, dword ptr ds : [esi+0x418]
        xor ecx, ebx
        pop edi
        lea eax, ds:[eax+eax-1]
        or eax, 1
        and eax, ecx
        mov ecx, dword ptr ds : [esi+0x400]
        sub ecx, edx
        pop esi
        shl eax, cl
        pop ebx
        ret 
        public_6d467f4 : nop
        mov ecx, dword ptr ds : [esi+0x404]
        xor eax, eax
        dec ecx
        mov edx, 1
        shl edx, cl
        mov ecx, dword ptr ds : [esi+0x418]
        mov esi, dword ptr ds : [esi+0x400]
        xor ecx, ebx
        lea edx, ds:[edx+edx-1]
        or edx, 1
        mov edi, 8
        and edx, ecx
        cmp esi, edi
        jb public_6d4683e
        public_6d46824 : nop
        mov ebx, edx
        mov ecx, esi
        sub ecx, edi
        and ebx, 0xFF
        shl ebx, cl
        add edi, 8
        shr edx, 8
        or eax, ebx
        cmp edi, esi
        jbe public_6d46824
        public_6d4683e : nop
        pop edi
        pop esi
        pop ebx
        ret 
        UNREACHABLE_TRAP(0x6d467b0)
    }
}

#undef public_6d467f4
#undef public_6d46824
#undef public_6d4683e
