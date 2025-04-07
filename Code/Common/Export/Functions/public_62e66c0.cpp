#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_628f050);
CLANG_FORWARD_PROC_SYMBOL(public_62de160);
CLANG_FORWARD_PROC_SYMBOL(public_62e66c0);
CLANG_FORWARD_PROC_SYMBOL(public_62e7010);
CLANG_FORWARD_PROC_SYMBOL(public_62e72d0);
CLANG_FORWARD_PROC_SYMBOL(public_62e90a0);
CLANG_FORWARD_PROC_SYMBOL(public_62ea220);
CLANG_FORWARD_PROC_SYMBOL(public_62eb6c0);
CLANG_FORWARD_PROC_SYMBOL(public_62eba70);
CLANG_FORWARD_PROC_SYMBOL(public_62ebcb0);
CLANG_FORWARD_PROC_SYMBOL(public_62eceb0);
CLANG_FORWARD_PROC_SYMBOL(public_62ecfb0);
CLANG_FORWARD_PROC_SYMBOL(public_62ed460);
CLANG_FORWARD_PROC_SYMBOL(public_62ed740);

#define public_62e66e5 _public_62e66e5
#define public_62e66e7 _public_62e66e7
#define public_62e66f8 _public_62e66f8
#define public_62e66fa _public_62e66fa
#define public_62e671e _public_62e671e
#define public_62e679d _public_62e679d
#define public_62e679f _public_62e679f
#define public_62e67c2 _public_62e67c2
#define public_62e6809 _public_62e6809
#define public_62e680b _public_62e680b
#define public_62e6814 _public_62e6814
#define public_62e6825 _public_62e6825
#define public_62e6827 _public_62e6827
#define public_62e6842 _public_62e6842
#define public_62e6844 _public_62e6844
#define public_62e6897 _public_62e6897
#define public_62e68ce _public_62e68ce

PROC_DECLARE(0x62e66c0, internal_62e66c0, public_62e66c0);
extern "C" NAKED register_t __cdecl internal_62e66c0()
{
    __asm
    {
        sub esp, 0xC
        push ebx
        push ebp
        push esi
        mov esi, ecx
        mov eax, dword ptr ds : [esi+8]
        xor ecx, ecx
        cmp eax, ecx
        push edi
        je public_62e671e
        add eax, 0xFFFFFFF8
        cmp eax, ecx
        je public_62e671e
        mov eax, dword ptr ds : [esi+8]
        cmp eax, ecx
        je public_62e66e5
        lea edx, ds:[eax-8]
        jmp public_62e66e7
        public_62e66e5 : nop
        xor edx, edx
        public_62e66e7 : nop
        mov eax, dword ptr ds : [esi+0x38]
        add eax, 8
        mov eax, dword ptr ds : [eax]
        cmp eax, ecx
        je public_62e66f8
        add eax, 0xFFFFFFF8
        jmp public_62e66fa
        public_62e66f8 : nop
        xor eax, eax
        public_62e66fa : nop
        mov dword ptr ds : [esi+0x157C], eax
        mov dword ptr ds : [esi+0x1580], edx
        mov byte ptr ds : [esi+0x1579], cl
        mov byte ptr ds : [esi+0x1578], cl
        mov byte ptr ds : [esi+0x157A], cl
        mov byte ptr ds : [esi+0x157B], cl
        public_62e671e : nop
        mov byte ptr ds : [esi+0x50], cl
        mov ecx, dword ptr ds : [esi+0x44]
        mov eax, dword ptr ds : [esi+0x48]
        lea edi, ds:[esi+0x40]
        push ecx
        push eax
        push eax
        call public_62ed460
        mov ebx, eax
        mov eax, dword ptr ds : [edi+8]
        add esp, 0xC
        push eax
        push ebx
        mov ecx, edi
        call public_628f050
        mov ebp, dword ptr ss : [esp+0x20]
        push ebp
        lea ecx, ds:[esi+0x142C]
        mov dword ptr ds : [edi+8], ebx
        call public_62ed740
        lea ecx, ds:[esi+0x12C]
        push ebp
        mov dword ptr ss : [esp+0x18], ecx
        call public_62ea220
        push ebp
        lea ecx, ds:[esi+0x1344]
        call public_62eba70
        mov ecx, dword ptr ds : [esi+0x18]
        mov edx, dword ptr ds : [ecx+4]
        mov ecx, dword ptr ds : [edx+0xC]
        lea edi, ds:[esi+0x18]
        call public_62de160
        mov byte ptr ds : [edi+0x15], al
        mov eax, dword ptr ds : [edi]
        add eax, 8
        mov byte ptr ss : [esp+0x13], 0
        mov eax, dword ptr ds : [eax]
        xor ebx, ebx
        cmp eax, ebx
        je public_62e679d
        add eax, 0xFFFFFFF8
        jmp public_62e679f
        public_62e679d : nop
        xor eax, eax
        public_62e679f : nop
        mov edx, dword ptr ds : [eax]
        lea ecx, ss:[esp+0x13]
        push ecx
        mov ecx, eax
        call dword ptr ds : [edx+0x60]
        mov al, byte ptr ss : [esp+0x13]
        test al, al
        je public_62e67c2
        mov al, byte ptr ds : [edi+0x15]
        test al, al
        jne public_62e67c2
        push ebx
        mov ecx, edi
        call public_62e90a0
        public_62e67c2 : nop
        lea ecx, ds:[esi+0x34]
        push ebp
        mov dword ptr ss : [esp+0x1C], ecx
        call public_62e7010
        fld dword ptr ss : [esp+0x20]
        fadd dword ptr ds : [esi+0x14F8]
        lea edi, ds:[esi+0x14A8]
        fst dword ptr ds : [edi+0x50]
        fcomp dword ptr ds : [public_63a07b0]
        fnstsw ax
        test ah, 0x41
        jne public_62e6814
        mov eax, dword ptr ds : [edi+4]
        add eax, 8
        mov dword ptr ds : [edi+0x50], ebx
        mov dword ptr ds : [edi+0x18], ebx
        mov dword ptr ds : [edi+0x3C], ebx
        mov eax, dword ptr ds : [eax]
        cmp eax, ebx
        je public_62e6809
        lea ecx, ds:[eax-8]
        jmp public_62e680b
        public_62e6809 : nop
        xor ecx, ecx
        public_62e680b : nop
        mov edx, dword ptr ds : [ecx]
        push edi
        call dword ptr ds : [edx+0xA4]
        public_62e6814 : nop
        mov eax, dword ptr ds : [edi+4]
        add eax, 8
        mov eax, dword ptr ds : [eax]
        cmp eax, ebx
        je public_62e6825
        add eax, 0xFFFFFFF8
        jmp public_62e6827
        public_62e6825 : nop
        xor eax, eax
        public_62e6827 : nop
        push eax
        push ebp
        lea ecx, ds:[edi+8]
        call public_62eceb0
        mov eax, dword ptr ds : [edi+4]
        add eax, 8
        mov eax, dword ptr ds : [eax]
        cmp eax, ebx
        je public_62e6842
        add eax, 0xFFFFFFF8
        jmp public_62e6844
        public_62e6842 : nop
        xor eax, eax
        public_62e6844 : nop
        push eax
        push ebp
        lea ecx, ds:[edi+0x2C]
        call public_62eceb0
        lea ebx, ds:[esi+0x1364]
        push ebp
        mov ecx, ebx
        call public_62ebcb0
        mov al, byte ptr ds : [esi+0x14]
        test al, al
        je public_62e68ce
        mov ecx, dword ptr ds : [esi+0x1580]
        mov eax, dword ptr ds : [ecx]
        call dword ptr ds : [eax+0xBC]
        test al, al
        jne public_62e68ce
        mov al, byte ptr ds : [esi+0x1820]
        test al, al
        je public_62e68ce
        mov al, byte ptr ds : [ebx+0xC5]
        test al, al
        jne public_62e6897
        mov eax, dword ptr ds : [ebx+0xC]
        test eax, eax
        je public_62e6897
        add eax, 0xFFFFFFF8
        test eax, eax
        jne public_62e68ce
        public_62e6897 : nop
        mov ecx, dword ptr ss : [esp+0x14]
        mov byte ptr ds : [esi+0x14], 0
        mov byte ptr ds : [esi+0x1820], 0
        call public_62eb6c0
        mov ecx, dword ptr ss : [esp+0x18]
        call public_62e72d0
        mov ecx, edi
        call public_62ecfb0
        mov eax, dword ptr ds : [ebx+8]
        test eax, eax
        je public_62e68ce
        mov cl, byte ptr ds : [eax+0x1958]
        mov byte ptr ds : [ebx+0xC3], cl
        public_62e68ce : nop
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 0xC
        ret 4
        UNREACHABLE_TRAP(0x62e66c0)
    }
}

#undef public_62e66e5
#undef public_62e66e7
#undef public_62e66f8
#undef public_62e66fa
#undef public_62e671e
#undef public_62e679d
#undef public_62e679f
#undef public_62e67c2
#undef public_62e6809
#undef public_62e680b
#undef public_62e6814
#undef public_62e6825
#undef public_62e6827
#undef public_62e6842
#undef public_62e6844
#undef public_62e6897
#undef public_62e68ce
