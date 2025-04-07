#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6306720);
CLANG_FORWARD_PROC_SYMBOL(public_6391d4e);

#define public_630679d _public_630679d
#define public_63067a4 _public_63067a4
#define public_63067cd _public_63067cd
#define public_63067d4 _public_63067d4
#define public_63067ee _public_63067ee
#define public_630683f _public_630683f

PROC_DECLARE(0x6306720, internal_6306720, public_6306720);
extern "C" NAKED register_t __cdecl internal_6306720()
{
    __asm
    {
        sub esp, 0x514
        push ebx
        push ebp
        push esi
        mov esi, dword ptr ds : [public_6399008]
        push edi
        lea eax, ss:[esp+0x18]
        push eax
        push 1
        xor edi, edi
        push edi
/*FIXUP push offset public_63a306c @0x630673a*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_63a306c
        push 0x80000002
        mov dword ptr ss : [esp+0x2C], edi
        mov dword ptr ss : [esp+0x28], edi
        call esi
        lea ecx, ss:[esp+0x14]
        push ecx
        push 1
        push edi
/*FIXUP push offset public_63a303c @0x6306756*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_63a303c
        push 0x80000002
        call esi
        mov eax, dword ptr ss : [esp+0x18]
        mov esi, dword ptr ds : [public_6399018]
        mov ebp, dword ptr ds : [public_6399014]
        xor bl, bl
        cmp eax, edi
        mov dword ptr ss : [esp+0x10], 0x400
        je public_63067a4
        lea edx, ss:[esp+0x10]
        push edx
        lea ecx, ss:[esp+0x128]
        push ecx
        push edi
        push edi
/*FIXUP push offset public_63a3028 @0x630678f*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_63a3028
        push eax
        call esi
        test eax, eax
        jne public_630679d
        mov bl, 1
        public_630679d : nop
        mov edx, dword ptr ss : [esp+0x18]
        push edx
        call ebp
        public_63067a4 : nop
        mov eax, dword ptr ss : [esp+0x14]
        cmp eax, edi
        je public_63067d4
        test bl, bl
        jne public_63067cd
        lea ecx, ss:[esp+0x10]
        push ecx
        lea edx, ss:[esp+0x128]
        push edx
        push edi
        push edi
/*FIXUP push offset public_63a3028 @0x63067bf*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_63a3028
        push eax
        call esi
        test eax, eax
        jne public_63067cd
        mov bl, 1
        public_63067cd : nop
        mov eax, dword ptr ss : [esp+0x14]
        push eax
        call ebp
        public_63067d4 : nop
        test bl, bl
        jne public_63067ee
        lea ecx, ss:[esp+0x124]
        push ecx
        call dword ptr ds : [public_6399370]
        mov dword ptr ss : [esp+0x10], 0x10
        public_63067ee : nop
        mov edx, dword ptr ss : [esp+0x10]
        mov esi, dword ptr ss : [esp+0x528]
        push edx
        lea eax, ss:[esp+0x128]
        push eax
        mov ecx, esi
        call public_6391d4e
        lea ecx, ss:[esp+0x1C]
        push ecx
        lea edx, ss:[esp+0x24]
        push edx
        mov dword ptr ss : [esp+0x24], 0x101
        call dword ptr ds : [public_6399004]
        test eax, eax
        jne public_630683f
        call dword ptr ds : [public_63993a4]
        push eax
        lea eax, ss:[esp+0x24]
/*FIXUP push offset public_63a3024 @0x6306830*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_63a3024
        push eax
        call dword ptr ds : [public_639931c]
        add esp, 0xC
        public_630683f : nop
        or ecx, 0xFFFFFFFF
        xor eax, eax
        lea edi, ss:[esp+0x20]
        repne scasb
        not ecx
        dec ecx
        push ecx
        lea ecx, ss:[esp+0x24]
        push ecx
        mov ecx, esi
        call public_6391d4e
        pop edi
        pop esi
        pop ebp
        mov al, 1
        pop ebx
        add esp, 0x514
        ret 
        UNREACHABLE_TRAP(0x6306720)
    }
}

#undef public_630679d
#undef public_63067a4
#undef public_63067cd
#undef public_63067d4
#undef public_63067ee
#undef public_630683f
