#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_4f7a90);
CLANG_FORWARD_PROC_SYMBOL(public_4fcef0);
CLANG_FORWARD_PROC_SYMBOL(public_503330);
CLANG_FORWARD_PROC_SYMBOL(public_515640);
CLANG_FORWARD_PROC_SYMBOL(public_515730);
CLANG_FORWARD_PROC_SYMBOL(public_516f70);
CLANG_FORWARD_PROC_SYMBOL(public_537ad0);
CLANG_FORWARD_PROC_SYMBOL(public_5416c0);
CLANG_FORWARD_PROC_SYMBOL(public_54baf0);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e1d);
CLANG_FORWARD_JUMP_SYMBOL(public_5bfdc1);

#define public_515770 _public_515770
#define public_5157a4 _public_5157a4
#define public_5157be _public_5157be
#define public_5157d0 _public_5157d0
#define public_5157e7 _public_5157e7
#define public_515805 _public_515805
#define public_515815 _public_515815
#define public_515824 _public_515824
#define public_515838 _public_515838
#define public_515850 _public_515850
#define public_515865 _public_515865

PROC_DECLARE(0x515730, internal_515730, public_515730);
extern "C" NAKED register_t __cdecl internal_515730()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_5bfdc1 @0x515732*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_5bfdc1
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        sub esp, 8
        push ebx
        push ebp
        push esi
        mov ebp, ecx
        push edi
        mov dword ptr ss : [esp+0x10], ebp
        mov eax, dword ptr ss : [ebp+0x10]
        xor ebx, ebx
        cmp eax, ebx
        mov dword ptr ss : [esp+0x20], 2
        je public_5157e7
        mov eax, dword ptr ss : [ebp+0xC]
        mov edi, dword ptr ds : [eax]
        cmp edi, eax
        je public_5157e7
        public_515770 : nop
        mov eax, dword ptr ds : [edi+8]
        push 1
        push eax
        call public_5416c0
        mov esi, eax
        add esp, 8
        cmp esi, ebx
        je public_5157d0
        call public_54baf0
        cmp esi, eax
        sete al
        cmp al, bl
        je public_5157a4
        lea ecx, ds:[esi+0x174]
        call public_515640
        and byte ptr ds : [esi+0x184], 0xBF
        public_5157a4 : nop
        lea ebp, ds:[esi+0x164]
        mov ecx, ebp
        call public_503330
        test al, al
        je public_5157be
        push ebp
        lea ecx, ds:[esi+0x28]
        call public_4fcef0
        public_5157be : nop
        mov ebp, dword ptr ss : [esp+0x10]
        xor ebx, ebx
        mov dword ptr ds : [esi+0x184], ebx
        mov dword ptr ds : [esi+0x160], ebx
        public_5157d0 : nop
        push edi
        lea ecx, ss:[esp+0x18]
        push ecx
        lea ecx, ss:[ebp+8]
        call public_516f70
        mov eax, dword ptr ss : [ebp+0xC]
        mov edi, dword ptr ds : [eax]
        cmp edi, eax
        jne public_515770
        public_5157e7 : nop
        lea esi, ss:[ebp+0x30]
        mov ecx, esi
        call public_515640
        mov ecx, dword ptr ds : [esi+8]
        cmp ecx, ebx
        mov byte ptr ss : [esp+0x20], 1
        je public_515805
        call public_4f7a90
        mov dword ptr ds : [esi+8], ebx
        public_515805 : nop
        mov eax, dword ptr ds : [esi+4]
        cmp eax, ebx
        je public_515815
        mov edx, dword ptr ds : [eax]
        push eax
        call dword ptr ds : [edx+8]
        mov dword ptr ds : [esi+4], ebx
        public_515815 : nop
        mov ecx, dword ptr ds : [esi+0xC]
        cmp ecx, ebx
        je public_515824
        call public_537ad0
        mov dword ptr ds : [esi+0xC], ebx
        public_515824 : nop
        lea ecx, ss:[ebp+0x14]
        mov dword ptr ds : [esi], ebx
        cmp dword ptr ds : [ecx], ebx
        mov byte ptr ss : [esp+0x20], bl
        je public_515838
        push ebx
        call dword ptr ds : [public_5c62a8]
        public_515838 : nop
        lea edi, ss:[ebp+8]
        mov ebp, dword ptr ds : [edi+4]
        mov esi, dword ptr ss : [ebp]
        cmp esi, ebp
        mov dword ptr ss : [esp+0x20], 0xFFFFFFFF
        je public_515865
        lea ecx, ds:[ecx]
        public_515850 : nop
        mov eax, esi
        mov esi, dword ptr ds : [esi]
        push eax
        lea eax, ss:[esp+0x18]
        push eax
        mov ecx, edi
        call public_516f70
        cmp esi, ebp
        jne public_515850
        public_515865 : nop
        mov ecx, dword ptr ds : [edi+4]
        push ecx
        call public_5b7e1d
        mov ecx, dword ptr ss : [esp+0x1C]
        add esp, 4
        mov dword ptr ds : [edi+4], ebx
        mov dword ptr ds : [edi+8], ebx
        pop edi
        pop esi
        pop ebp
        pop ebx
        mov dword ptr fs : [0], ecx
        add esp, 0x14
        ret 
        UNREACHABLE_TRAP(0x515730)
    }
}

#undef public_515770
#undef public_5157a4
#undef public_5157be
#undef public_5157d0
#undef public_5157e7
#undef public_515805
#undef public_515815
#undef public_515824
#undef public_515838
#undef public_515850
#undef public_515865
