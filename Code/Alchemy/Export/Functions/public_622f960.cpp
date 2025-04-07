#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_622f960);
CLANG_FORWARD_PROC_SYMBOL(public_6230790);
CLANG_FORWARD_PROC_SYMBOL(public_62307b0);
CLANG_FORWARD_JUMP_SYMBOL(public_6249880);

#define public_622f9cd _public_622f9cd
#define public_622f9df _public_622f9df
#define public_622f9f1 _public_622f9f1
#define public_622f9fb _public_622f9fb

PROC_DECLARE(0x622f960, internal_622f960, public_622f960);
extern "C" NAKED register_t __cdecl internal_622f960()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_6249880 @0x622f962*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_6249880
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        sub esp, 8
        fld dword ptr ss : [esp+0x1C]
        mov eax, dword ptr ss : [esp+0x18]
        push esi
        push edi
        fstp dword ptr ds : [eax+0x90]
        lea esi, ds:[eax+0xB4]
        lea eax, ss:[esp+8]
        push eax
        mov ecx, esi
        call public_62307b0
        mov edi, dword ptr ds : [eax]
        mov dword ptr ss : [esp+0xC], edi
        lea ecx, ss:[esp+0x20]
        mov dword ptr ss : [esp+0x18], 0
        push ecx
        mov ecx, esi
        mov dword ptr ss : [esp+0xC], 0
        call public_6230790
        mov eax, dword ptr ss : [esp+0x20]
        mov byte ptr ss : [esp+0x18], 1
        cmp eax, edi
        je public_622f9fb
        mov esi, dword ptr ss : [esp+0x24]
        public_622f9cd : nop
        mov ecx, dword ptr ds : [eax+0x6C]
        test ecx, ecx
        je public_622f9df
        mov edx, dword ptr ds : [ecx]
        push esi
        push ecx
        call dword ptr ds : [edx+0x38]
        mov eax, dword ptr ss : [esp+0x20]
        public_622f9df : nop
        mov ecx, dword ptr ds : [eax+0x70]
        test ecx, ecx
        je public_622f9f1
        mov eax, dword ptr ds : [ecx]
        push esi
        push ecx
        call dword ptr ds : [eax+0x38]
        mov eax, dword ptr ss : [esp+0x20]
        public_622f9f1 : nop
        mov eax, dword ptr ds : [eax]
        cmp eax, edi
        mov dword ptr ss : [esp+0x20], eax
        jne public_622f9cd
        public_622f9fb : nop
        mov ecx, dword ptr ss : [esp+0x10]
        pop edi
        xor eax, eax
        pop esi
        mov dword ptr fs : [0], ecx
        add esp, 0x14
        ret 8
        UNREACHABLE_TRAP(0x622f960)
    }
}

#undef public_622f9cd
#undef public_622f9df
#undef public_622f9f1
#undef public_622f9fb
