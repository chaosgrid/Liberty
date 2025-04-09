#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_5916b0);
CLANG_FORWARD_PROC_SYMBOL(public_594590);
CLANG_FORWARD_PROC_SYMBOL(public_5947f0);
CLANG_FORWARD_PROC_SYMBOL(public_594e70);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e84);
CLANG_FORWARD_JUMP_SYMBOL(public_5c4aa3);

#define public_594635 _public_594635
#define public_594637 _public_594637
#define public_594648 _public_594648
#define public_594655 _public_594655
#define public_594668 _public_594668
#define public_594670 _public_594670
#define public_59467a _public_59467a
#define public_59467f _public_59467f
#define public_594681 _public_594681
#define public_594686 _public_594686
#define public_5946d8 _public_5946d8

PROC_DECLARE(0x594590, internal_594590, public_594590);
extern "C" NAKED register_t __cdecl internal_594590()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_5c4aa3 @0x594592*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_5c4aa3
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        push ecx
        push ebx
        push esi
        push edi
        push 0x1C
        call public_5b7e84
        mov esi, eax
        add esp, 4
        mov dword ptr ss : [esp+0xC], esi
        xor ebx, ebx
        cmp esi, ebx
        mov dword ptr ss : [esp+0x18], ebx
        je public_594635
        mov dword ptr ds : [esi], offset public_5e534c
        mov al, byte ptr ss : [esp+0x20]
        mov cl, byte ptr ss : [esp+0x20]
        push 0x24
        mov byte ptr ss : [esp+0x1C], 1
        mov byte ptr ds : [esi+4], al
        mov byte ptr ds : [esi+5], cl
        mov byte ptr ds : [esi+0x10], bl
        call public_5b7e84
        mov dword ptr ds : [eax+4], ebx
        mov byte ptr ds : [eax+0x20], 1
        mov byte ptr ds : [eax+0x21], bl
        mov dword ptr ds : [esi+0xC], eax
        mov byte ptr ds : [eax+0x21], 1
        mov eax, dword ptr ds : [esi+0xC]
        mov dword ptr ds : [eax], ebx
        mov edx, dword ptr ds : [esi+0xC]
        mov dword ptr ds : [edx+8], ebx
        mov edi, dword ptr ds : [esi+0xC]
        push 0x24
        call public_5b7e84
        mov dword ptr ds : [eax+4], edi
        mov byte ptr ds : [eax+0x20], bl
        mov byte ptr ds : [eax+0x21], bl
        mov dword ptr ds : [esi+8], eax
        mov dword ptr ds : [eax], eax
        mov eax, dword ptr ds : [esi+8]
        mov dword ptr ds : [eax+8], eax
        mov dword ptr ds : [esi+0x14], ebx
        add esp, 8
        mov dword ptr ds : [esi], offset public_5e5334
        mov dword ptr ds : [esi+0x18], 0x3F800000
        jmp public_594637
        public_594635 : nop
        xor esi, esi
        public_594637 : nop
        mov eax, dword ptr ds : [esi+8]
        mov edi, dword ptr ds : [eax]
        cmp edi, eax
        mov dword ptr ss : [esp+0x18], 0xFFFFFFFF
        je public_594686
        public_594648 : nop
        mov ecx, dword ptr ds : [edi+0x1C]
        cmp ecx, ebx
        je public_594655
        mov eax, dword ptr ds : [ecx]
        push 1
        call dword ptr ds : [eax]
        public_594655 : nop
        mov eax, dword ptr ds : [edi+8]
        cmp byte ptr ds : [eax+0x21], bl
        jne public_594668
        push eax
        call public_594e70
        add esp, 4
        jmp public_59467f
        public_594668 : nop
        mov eax, dword ptr ds : [edi+4]
        cmp edi, dword ptr ds : [eax+8]
        jne public_59467a
        public_594670 : nop
        mov edi, eax
        mov eax, dword ptr ds : [eax+4]
        cmp edi, dword ptr ds : [eax+8]
        je public_594670
        public_59467a : nop
        cmp dword ptr ds : [edi+8], eax
        je public_594681
        public_59467f : nop
        mov edi, eax
        public_594681 : nop
        cmp edi, dword ptr ds : [esi+8]
        jne public_594648
        public_594686 : nop
        mov eax, dword ptr ds : [esi+8]
        mov edx, dword ptr ds : [eax]
        lea ecx, ds:[esi+4]
        push eax
        push edx
        lea edx, ss:[esp+0x14]
        push edx
        call public_5947f0
        mov eax, dword ptr ss : [esp+0x20]
        mov ecx, dword ptr ds : [eax]
        mov edx, dword ptr ss : [esp+0x24]
        mov dword ptr ds : [esi+0x18], ecx
        mov ecx, dword ptr ss : [esp+0x28]
        push edx
        mov edx, dword ptr ds : [eax+4]
        push ecx
        push edx
        mov ecx, esi
        call public_5916b0
        test al, al
        jne public_5946d8
        mov eax, dword ptr ds : [esi]
        push 1
        mov ecx, esi
        call dword ptr ds : [eax]
        pop edi
        pop esi
        xor eax, eax
        pop ebx
        mov ecx, dword ptr ss : [esp+4]
        mov dword ptr fs : [0], ecx
        add esp, 0x10
        ret 
        public_5946d8 : nop
        mov ecx, dword ptr ss : [esp+0x10]
        pop edi
        mov eax, esi
        pop esi
        pop ebx
        mov dword ptr fs : [0], ecx
        add esp, 0x10
        ret 
        UNREACHABLE_TRAP(0x594590)
    }
}

#undef public_594635
#undef public_594637
#undef public_594648
#undef public_594655
#undef public_594668
#undef public_594670
#undef public_59467a
#undef public_59467f
#undef public_594681
#undef public_594686
#undef public_5946d8
