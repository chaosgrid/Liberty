#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6201810);

#define public_6201822 _public_6201822
#define public_620184d _public_620184d
#define public_620185f _public_620185f
#define public_6201867 _public_6201867

PROC_DECLARE(0x6201810, internal_6201810, public_6201810);
extern "C" NAKED register_t __cdecl internal_6201810()
{
    __asm
    {
        push ebx
        push esi
        mov esi, dword ptr ss : [esp+0x10]
        mov ebx, ecx
        test esi, esi
        je public_6201867
        push ebp
        mov ebp, dword ptr ss : [esp+0x10]
        push edi
        public_6201822 : nop
        mov eax, dword ptr ds : [esi]
        push esi
        call dword ptr ds : [eax+0x34]
        mov ecx, dword ptr ds : [esi]
        push ebp
        push esi
        mov edi, eax
        call dword ptr ds : [ecx+0x14]
        mov edx, dword ptr ds : [esi]
        lea eax, ss:[esp+0x18]
        push eax
        push esi
        call dword ptr ds : [edx+0x20]
        mov al, byte ptr ss : [esp+0x18]
        push esi
        test al, 1
        je public_620184d
        mov ecx, dword ptr ds : [ebx]
        push ebx
        call dword ptr ds : [ecx+0x5C]
        jmp public_620185f
        public_620184d : nop
        mov edx, dword ptr ds : [esi]
        call dword ptr ds : [edx+0x2C]
        test eax, eax
        je public_620185f
        push eax
        push ebp
        mov ecx, ebx
        call public_6201810
        public_620185f : nop
        test edi, edi
        mov esi, edi
        jne public_6201822
        pop edi
        pop ebp
        public_6201867 : nop
        pop esi
        pop ebx
        ret 8
        UNREACHABLE_TRAP(0x6201810)
    }
}

#undef public_6201822
#undef public_620184d
#undef public_620185f
#undef public_6201867
