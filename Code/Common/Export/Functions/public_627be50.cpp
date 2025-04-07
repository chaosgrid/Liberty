#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_627be50);
CLANG_FORWARD_PROC_SYMBOL(public_62fd570);
CLANG_FORWARD_PROC_SYMBOL(public_6391d5a);
CLANG_FORWARD_JUMP_SYMBOL(public_6392bf8);

#define public_627be80 _public_627be80
#define public_627be89 _public_627be89
#define public_627be8b _public_627be8b
#define public_627bea0 _public_627bea0
#define public_627bea7 _public_627bea7
#define public_627beba _public_627beba
#define public_627bec3 _public_627bec3
#define public_627bec7 _public_627bec7
#define public_627bee0 _public_627bee0
#define public_627bef1 _public_627bef1

PROC_DECLARE(0x627be50, internal_627be50, public_627be50);
extern "C" NAKED register_t __cdecl internal_627be50()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_6392bf8 @0x627be52*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_6392bf8
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        push ecx
        push ebx
        push esi
        mov esi, ecx
        push edi
        mov dword ptr ss : [esp+0xC], esi
        mov dword ptr ds : [esi], offset public_639b5a4
        xor ebx, ebx
        mov dword ptr ss : [esp+0x18], ebx
        xor edi, edi
        lea ecx, ds:[ecx]
        public_627be80 : nop
        cmp edi, ebx
        jne public_627be89
        mov edi, dword ptr ds : [esi+4]
        jmp public_627be8b
        public_627be89 : nop
        mov edi, dword ptr ds : [edi]
        public_627be8b : nop
        cmp edi, ebx
        je public_627bea0
        mov eax, dword ptr ds : [edi+8]
        push eax
        call public_62fd570
        add esp, 4
        mov dword ptr ds : [edi+8], ebx
        jmp public_627be80
        public_627bea0 : nop
        mov edi, dword ptr ds : [esi+4]
        cmp edi, ebx
        je public_627bec7
        public_627bea7 : nop
        cmp byte ptr ds : [esi+0xC], bl
        mov eax, edi
        mov edi, dword ptr ds : [edi]
        je public_627beba
        mov ecx, dword ptr ds : [esi+0x10]
        mov dword ptr ds : [eax], ecx
        mov dword ptr ds : [esi+0x10], eax
        jmp public_627bec3
        public_627beba : nop
        push eax
        call public_6391d5a
        add esp, 4
        public_627bec3 : nop
        cmp edi, ebx
        jne public_627bea7
        public_627bec7 : nop
        mov edi, dword ptr ds : [esi+0x10]
        cmp edi, ebx
        mov dword ptr ds : [esi], offset public_639b59c
        mov dword ptr ds : [esi+8], ebx
        mov dword ptr ds : [esi+4], ebx
        je public_627bef1
        lea ebx, ds:[ebx]
        public_627bee0 : nop
        mov eax, edi
        mov edi, dword ptr ds : [edi]
        push eax
        call public_6391d5a
        add esp, 4
        cmp edi, ebx
        jne public_627bee0
        public_627bef1 : nop
        mov ecx, dword ptr ss : [esp+0x10]
        mov dword ptr ds : [esi+0x10], ebx
        pop edi
        pop esi
        pop ebx
        mov dword ptr fs : [0], ecx
        add esp, 0x10
        ret 
        UNREACHABLE_TRAP(0x627be50)
    }
}

#undef public_627be80
#undef public_627be89
#undef public_627be8b
#undef public_627bea0
#undef public_627bea7
#undef public_627beba
#undef public_627bec3
#undef public_627bec7
#undef public_627bee0
#undef public_627bef1
