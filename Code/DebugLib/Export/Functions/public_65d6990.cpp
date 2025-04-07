#include "DebugLib-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_65d6990);
CLANG_FORWARD_JUMP_SYMBOL(public_65e0154);

#define public_65d69df _public_65d69df
#define public_65d69f2 _public_65d69f2
#define public_65d6a06 _public_65d6a06
#define public_65d6a16 _public_65d6a16
#define public_65d6a1d _public_65d6a1d

PROC_DECLARE(0x65d6990, internal_65d6990, public_65d6990);
extern "C" NAKED register_t __cdecl internal_65d6990()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_65e0154 @0x65d6992*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_65e0154
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        push ecx
        push esi
        mov esi, dword ptr ss : [esp+0x18]
        mov dword ptr ss : [esp+4], esi
        test esi, esi
        mov dword ptr ss : [esp+0x10], 0
        je public_65d6a1d
        mov dword ptr ds : [esi], 0
        mov dword ptr ds : [esi+4], 0
        mov eax, dword ptr ds : [esi]
        mov byte ptr ss : [esp+0x10], 2
        test eax, eax
        je public_65d69df
        mov ecx, dword ptr ds : [eax]
        push eax
        call dword ptr ds : [ecx+8]
        mov dword ptr ds : [esi], 0
        public_65d69df : nop
        push edi
        mov edi, dword ptr ss : [esp+0x20]
        mov eax, dword ptr ds : [edi]
        test eax, eax
        mov dword ptr ds : [esi], eax
        je public_65d69f2
        mov edx, dword ptr ds : [eax]
        push eax
        call dword ptr ds : [edx+4]
        public_65d69f2 : nop
        mov eax, dword ptr ds : [esi+4]
        test eax, eax
        je public_65d6a06
        mov ecx, dword ptr ds : [eax]
        push eax
        call dword ptr ds : [ecx+8]
        mov dword ptr ds : [esi+4], 0
        public_65d6a06 : nop
        mov eax, dword ptr ds : [edi+4]
        test eax, eax
        mov dword ptr ds : [esi+4], eax
        je public_65d6a16
        mov edx, dword ptr ds : [eax]
        push eax
        call dword ptr ds : [edx+4]
        public_65d6a16 : nop
        mov eax, dword ptr ds : [edi+8]
        pop edi
        mov dword ptr ds : [esi+8], eax
        public_65d6a1d : nop
        mov ecx, dword ptr ss : [esp+8]
        pop esi
        mov dword ptr fs : [0], ecx
        add esp, 0x10
        ret 
        UNREACHABLE_TRAP(0x65d6990)
    }
}

#undef public_65d69df
#undef public_65d69f2
#undef public_65d6a06
#undef public_65d6a16
#undef public_65d6a1d
