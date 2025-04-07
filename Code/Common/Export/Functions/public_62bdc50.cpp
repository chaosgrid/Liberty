#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_630d3f0);
CLANG_FORWARD_PROC_SYMBOL(public_6310170);
CLANG_FORWARD_PROC_SYMBOL(public_6310410);
CLANG_FORWARD_PROC_SYMBOL(public_63105b0);
CLANG_FORWARD_PROC_SYMBOL(public_63108f0);
CLANG_FORWARD_PROC_SYMBOL(public_6310b70);
CLANG_FORWARD_PROC_SYMBOL(public_6333e40);

#define public_62bdc80 _public_62bdc80
#define public_62bdca4 _public_62bdca4
#define public_62bdcc0 _public_62bdcc0
#define public_62bdcda _public_62bdcda
#define public_62bdce5 _public_62bdce5

PROC_DECLARE(0x62bdc50, internal_62bdc50, public_62bdc50);
extern "C" NAKED register_t __cdecl internal_62bdc50()
{
    __asm
    {
        push ebx
        push esi
        push edi
        mov edi, ecx
        mov eax, dword ptr ds : [edi]
        call dword ptr ds : [eax+4]
        lea ebx, ds:[edi+4]
        mov ecx, ebx
        call public_6333e40
        mov esi, dword ptr ss : [esp+0x10]
        mov ecx, esi
        mov dword ptr ds : [edi+8], 0xBF800000
        mov byte ptr ds : [edi+0xC], 0
        call public_6310170
        test al, al
        je public_62bdce5
        mov edi, edi
/*FIXUP public_62bdc80 : nop
        push offset public_6399f10 @0x62bdc80*/
  FIXUP public_62bdc80 : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_6399f10
        mov ecx, esi
        call public_6310410
        test al, al
        mov ecx, esi
        je public_62bdca4
        call public_6310b70
        push eax
        call public_630d3f0
        add esp, 4
        mov dword ptr ds : [ebx], eax
        jmp public_62bdcda
/*FIXUP public_62bdca4 : nop
        push offset public_639ef48 @0x62bdca4*/
  FIXUP public_62bdca4 : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_639ef48
        call public_6310410
        test al, al
        mov ecx, esi
        je public_62bdcc0
        push 0
        call public_63108f0
        fstp dword ptr ds : [edi+8]
        jmp public_62bdcda
/*FIXUP public_62bdcc0 : nop
        push offset public_639ef3c @0x62bdcc0*/
  FIXUP public_62bdcc0 : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_639ef3c
        call public_6310410
        test al, al
        je public_62bdcda
        push 0
        mov ecx, esi
        call public_63105b0
        mov byte ptr ds : [edi+0xC], al
        public_62bdcda : nop
        mov ecx, esi
        call public_6310170
        test al, al
        jne public_62bdc80
        public_62bdce5 : nop
        pop edi
        pop esi
        mov al, 1
        pop ebx
        ret 4
        UNREACHABLE_TRAP(0x62bdc50)
    }
}

#undef public_62bdc80
#undef public_62bdca4
#undef public_62bdcc0
#undef public_62bdcda
#undef public_62bdce5
