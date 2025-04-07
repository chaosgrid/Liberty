#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6279800);
CLANG_FORWARD_PROC_SYMBOL(public_6334430);
CLANG_FORWARD_PROC_SYMBOL(public_6391d5a);
CLANG_FORWARD_JUMP_SYMBOL(public_6392b58);

#define public_6279828 _public_6279828
#define public_6279854 _public_6279854
#define public_627985d _public_627985d
#define public_6279870 _public_6279870
#define public_627987e _public_627987e

PROC_DECLARE(0x6279800, internal_6279800, public_6279800);
extern "C" NAKED register_t __cdecl internal_6279800()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_6392b58 @0x6279802*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_6392b58
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        push ecx
        push ebp
        push esi
        mov esi, ecx
        push edi
        mov dword ptr ss : [esp+0xC], esi
        xor ebp, ebp
        mov dword ptr ss : [esp+0x18], ebp
        xor edi, edi
        push ebx
        public_6279828 : nop
        mov ecx, dword ptr ds : [esi+4]
        cmp ecx, ebp
        je public_627985d
        mov eax, dword ptr ds : [esi+8]
        sub eax, ecx
        sar eax, 2
        cmp edi, eax
        jae public_627985d
        mov ebx, dword ptr ds : [ecx+edi*4]
        cmp ebx, ebp
        je public_6279854
        lea eax, ds:[ebx+4]
        push eax
        call public_6334430
        push ebx
        call public_6391d5a
        add esp, 8
        public_6279854 : nop
        mov ecx, dword ptr ds : [esi+4]
        mov dword ptr ds : [ecx+edi*4], ebp
        inc edi
        jmp public_6279828
        public_627985d : nop
        mov edx, dword ptr ds : [esi+8]
        mov ecx, dword ptr ds : [esi+4]
        mov eax, edx
        cmp eax, edx
        pop ebx
        je public_627987e
        lea ebx, ds:[ebx]
        public_6279870 : nop
        mov edi, dword ptr ds : [eax]
        mov dword ptr ds : [ecx], edi
        add eax, 4
        add ecx, 4
        cmp eax, edx
        jne public_6279870
        public_627987e : nop
        mov edx, dword ptr ds : [esi+4]
        push edx
        mov dword ptr ds : [esi+8], ecx
        call public_6391d5a
        mov ecx, dword ptr ss : [esp+0x14]
        add esp, 4
        mov dword ptr ds : [esi+4], ebp
        mov dword ptr ds : [esi+8], ebp
        mov dword ptr ds : [esi+0xC], ebp
        pop edi
        pop esi
        pop ebp
        mov dword ptr fs : [0], ecx
        add esp, 0x10
        ret 
        UNREACHABLE_TRAP(0x6279800)
    }
}

#undef public_6279828
#undef public_6279854
#undef public_627985d
#undef public_6279870
#undef public_627987e
