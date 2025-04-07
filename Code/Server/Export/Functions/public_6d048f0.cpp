#include "Server-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d048f0);
CLANG_FORWARD_PROC_SYMBOL(public_6d051d0);
CLANG_FORWARD_PROC_SYMBOL(public_6d05ff0);
CLANG_FORWARD_PROC_SYMBOL(public_6d58e50);
CLANG_FORWARD_PROC_SYMBOL(public_6d5c540);
CLANG_FORWARD_PROC_SYMBOL(public_6d5ffb0);
CLANG_FORWARD_JUMP_SYMBOL(public_6d6110b);

#define public_6d04921 _public_6d04921
#define public_6d04940 _public_6d04940
#define public_6d0494b _public_6d0494b
#define public_6d04953 _public_6d04953
#define public_6d0495d _public_6d0495d
#define public_6d04964 _public_6d04964
#define public_6d04968 _public_6d04968
#define public_6d049b5 _public_6d049b5
#define public_6d049c0 _public_6d049c0
#define public_6d049e4 _public_6d049e4
#define public_6d04a45 _public_6d04a45
#define public_6d04a50 _public_6d04a50
#define public_6d04a74 _public_6d04a74

PROC_DECLARE(0x6d048f0, internal_6d048f0, public_6d048f0);
extern "C" NAKED register_t __cdecl internal_6d048f0()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_6d6110b @0x6d048f2*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_6d6110b
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        sub esp, 0x14
        push ebx
        push ebp
        push esi
        mov ebp, ecx
        push edi
        mov dword ptr ss : [esp+0x14], ebp
        mov edi, dword ptr ss : [ebp+0x14]
        mov esi, dword ptr ds : [edi]
        xor ebx, ebx
        cmp esi, edi
        mov dword ptr ss : [esp+0x2C], ebx
        je public_6d04968
        public_6d04921 : nop
        mov ecx, dword ptr ds : [esi+0x10]
        mov eax, dword ptr ds : [ecx]
        call dword ptr ds : [eax+0x15C]
        mov eax, dword ptr ds : [esi+8]
        cmp byte ptr ds : [eax+0x15], bl
        jne public_6d0494b
        mov esi, eax
        mov eax, dword ptr ds : [esi]
        cmp byte ptr ds : [eax+0x15], bl
        jne public_6d04964
        lea ecx, ds:[ecx]
        public_6d04940 : nop
        mov esi, eax
        mov eax, dword ptr ds : [esi]
        cmp byte ptr ds : [eax+0x15], bl
        je public_6d04940
        jmp public_6d04964
        public_6d0494b : nop
        mov eax, dword ptr ds : [esi+4]
        cmp esi, dword ptr ds : [eax+8]
        jne public_6d0495d
        public_6d04953 : nop
        mov esi, eax
        mov eax, dword ptr ds : [eax+4]
        cmp esi, dword ptr ds : [eax+8]
        je public_6d04953
        public_6d0495d : nop
        cmp dword ptr ds : [esi+8], eax
        je public_6d04964
        mov esi, eax
        public_6d04964 : nop
        cmp esi, edi
        jne public_6d04921
        public_6d04968 : nop
        mov edi, dword ptr ss : [ebp+0x14]
        mov ecx, dword ptr ss : [ebp+0x20]
        cmp ecx, ebx
        mov eax, dword ptr ds : [edi]
        lea esi, ss:[ebp+0x10]
        mov dword ptr ss : [esp+0x10], eax
        je public_6d049b5
        mov ecx, eax
        cmp eax, ecx
        jne public_6d049b5
        cmp edi, edi
        jne public_6d049b5
        mov ecx, dword ptr ds : [edi+4]
        push ecx
        mov ecx, esi
        call public_6d05ff0
        mov eax, dword ptr ds : [esi+8]
        mov edx, dword ptr ds : [esi+4]
        mov dword ptr ds : [edx+4], eax
        mov eax, dword ptr ds : [esi+4]
        mov dword ptr ds : [esi+0x10], ebx
        mov dword ptr ds : [eax], eax
        mov eax, dword ptr ds : [esi+4]
        lea ecx, ss:[esp+0x18]
        push ecx
        mov ecx, esi
        mov dword ptr ds : [eax+8], eax
        call public_6d5c540
        jmp public_6d049e4
        public_6d049b5 : nop
        cmp eax, edi
        je public_6d049e4
        lea esp, ss:[esp]
        public_6d049c0 : nop
        push ebx
        lea edx, ss:[esp+0x20]
        push edx
        lea ecx, ss:[esp+0x18]
        call public_6d051d0
        mov eax, dword ptr ds : [eax]
        push eax
        lea ecx, ss:[esp+0x24]
        push ecx
        mov ecx, esi
        call public_6d58e50
        cmp dword ptr ss : [esp+0x10], edi
        jne public_6d049c0
        public_6d049e4 : nop
        mov edi, dword ptr ds : [esi+4]
        cmp dword ptr ds : [esi+0x10], ebx
        mov ecx, dword ptr ds : [edi]
        mov dword ptr ss : [esp+0x2C], 0xFFFFFFFF
        mov dword ptr ss : [esp+0x10], ecx
        je public_6d04a45
        lea edx, ss:[esp+0x20]
        push edx
        mov ecx, esi
        call public_6d5c540
        mov ecx, dword ptr ss : [esp+0x10]
        cmp ecx, dword ptr ds : [eax]
        jne public_6d04a45
        mov eax, dword ptr ds : [esi+4]
        cmp edi, eax
        jne public_6d04a45
        mov eax, dword ptr ds : [eax+4]
        push eax
        mov ecx, esi
        call public_6d05ff0
        mov ecx, dword ptr ds : [esi+4]
        mov edx, dword ptr ds : [esi+8]
        mov dword ptr ds : [ecx+4], edx
        mov eax, dword ptr ds : [esi+4]
        mov dword ptr ds : [esi+0x10], ebx
        mov dword ptr ds : [eax], eax
        mov eax, dword ptr ds : [esi+4]
        mov dword ptr ds : [eax+8], eax
        lea eax, ss:[esp+0x1C]
        push eax
        mov ecx, esi
        call public_6d5c540
        jmp public_6d04a74
        public_6d04a45 : nop
        cmp ecx, edi
        je public_6d04a74
        lea esp, ss:[esp]
        public_6d04a50 : nop
        push ebx
        lea ecx, ss:[esp+0x1C]
        push ecx
        lea ecx, ss:[esp+0x18]
        call public_6d051d0
        mov edx, dword ptr ds : [eax]
        push edx
        lea eax, ss:[esp+0x18]
        push eax
        mov ecx, esi
        call public_6d58e50
        cmp dword ptr ss : [esp+0x10], edi
        jne public_6d04a50
        public_6d04a74 : nop
        mov ecx, dword ptr ds : [esi+4]
        push ecx
        call public_6d5ffb0
        mov edx, dword ptr ds : [esi+8]
        push edx
        mov dword ptr ds : [esi+4], ebx
        mov dword ptr ds : [esi+0x10], ebx
        call public_6d5ffb0
        mov ecx, dword ptr ss : [esp+0x2C]
        add esp, 8
        pop edi
        mov dword ptr ds : [esi+8], ebx
        pop esi
        pop ebp
        pop ebx
        mov dword ptr fs : [0], ecx
        add esp, 0x20
        ret 
        UNREACHABLE_TRAP(0x6d048f0)
    }
}

#undef public_6d04921
#undef public_6d04940
#undef public_6d0494b
#undef public_6d04953
#undef public_6d0495d
#undef public_6d04964
#undef public_6d04968
#undef public_6d049b5
#undef public_6d049c0
#undef public_6d049e4
#undef public_6d04a45
#undef public_6d04a50
#undef public_6d04a74
