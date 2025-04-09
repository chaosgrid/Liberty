#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_422610);

#define public_42263b _public_42263b
#define public_42264d _public_42264d

PROC_DECLARE(0x422610, internal_422610, public_422610);
extern "C" NAKED register_t __cdecl internal_422610()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        test eax, eax
        push ebx
        push ebp
        push esi
        push edi
        je public_42263b
        mov ecx, dword ptr ds : [eax]
        push eax
        call dword ptr ds : [ecx+0x14]
        mov edi, dword ptr ds : [eax]
        mov ecx, dword ptr ds : [eax+8]
        mov ebx, dword ptr ds : [eax+4]
        mov eax, dword ptr ds : [eax+0xC]
        mov esi, dword ptr ds : [public_610854]
        sub ecx, edi
        sub eax, ebx
        inc ecx
        inc eax
        jmp public_42264d
        public_42263b : nop
        mov esi, dword ptr ds : [public_610854]
        mov ecx, dword ptr ds : [public_610850]
        xor edi, edi
        xor ebx, ebx
        mov eax, esi
        public_42264d : nop
        mov edx, esi
        sub edx, eax
        sub edx, ebx
        mov ebx, dword ptr ds : [public_5c6de0]
        push eax
        push ecx
        sub esi, edx
        sub esi, eax
        push esi
        mov dword ptr ds : [public_664994], edi
        mov dword ptr ds : [public_664998], edx
        mov dword ptr ds : [public_66499c], ecx
        mov dword ptr ds : [public_6649a0], eax
        mov ebx, dword ptr ds : [ebx]
        mov ebp, dword ptr ds : [ebx]
        push edi
        push ebx
        call dword ptr ss : [ebp+0x54]
        pop edi
        pop esi
        pop ebp
        pop ebx
        ret 
        UNREACHABLE_TRAP(0x422610)
    }
}

#undef public_42263b
#undef public_42264d
