#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ef6750);
CLANG_FORWARD_PROC_SYMBOL(public_6ef6b30);
CLANG_FORWARD_PROC_SYMBOL(public_6ef6b50);
CLANG_FORWARD_PROC_SYMBOL(public_6ef73c0);
CLANG_FORWARD_PROC_SYMBOL(public_6ef7860);
CLANG_FORWARD_PROC_SYMBOL(public_6ef8560);
CLANG_FORWARD_PROC_SYMBOL(public_6efa720);
CLANG_FORWARD_PROC_SYMBOL(public_6efa9e0);
CLANG_FORWARD_PROC_SYMBOL(public_6efac00);
CLANG_FORWARD_PROC_SYMBOL(public_6efae60);
CLANG_FORWARD_PROC_SYMBOL(public_6f96770);
CLANG_FORWARD_PROC_SYMBOL(public_6fa8fe0);
CLANG_FORWARD_PROC_SYMBOL(public_6fa912a);

#define public_6efaa3f _public_6efaa3f
#define public_6efaa47 _public_6efaa47
#define public_6efaa52 _public_6efaa52
#define public_6efaa5a _public_6efaa5a
#define public_6efaa70 _public_6efaa70
#define public_6efaa8c _public_6efaa8c
#define public_6efaa93 _public_6efaa93
#define public_6efaaa6 _public_6efaaa6
#define public_6efaab1 _public_6efaab1
#define public_6efaab9 _public_6efaab9
#define public_6efaad1 _public_6efaad1
#define public_6efaadc _public_6efaadc
#define public_6efaae4 _public_6efaae4
#define public_6efaaec _public_6efaaec
#define public_6efaaf4 _public_6efaaf4
#define public_6efab3c _public_6efab3c
#define public_6efab61 _public_6efab61
#define public_6efab83 _public_6efab83
#define public_6efab86 _public_6efab86
#define public_6efaba3 _public_6efaba3
#define public_6efabab _public_6efabab
#define public_6efabc0 _public_6efabc0
#define public_6efabe9 _public_6efabe9

PROC_DECLARE(0x6efa9e0, internal_6efa9e0, public_6efa9e0);
extern "C" NAKED register_t __cdecl internal_6efa9e0()
{
    __asm
    {
        sub esp, 0xC
        push ebx
        push ebp
        mov ebp, dword ptr ss : [esp+0x18]
        mov eax, dword ptr ss : [ebp]
        push esi
        push edi
        mov edi, ecx
        mov dword ptr ds : [edi], eax
        mov ecx, dword ptr ss : [ebp+4]
        mov dword ptr ds : [edi+4], ecx
        mov edx, dword ptr ss : [ebp+8]
        mov dword ptr ds : [edi+8], edx
        mov eax, dword ptr ss : [ebp+0xC]
        mov dword ptr ds : [edi+0xC], eax
        mov ecx, dword ptr ss : [ebp+0x10]
        mov dword ptr ds : [edi+0x10], ecx
        mov edx, dword ptr ss : [ebp+0x14]
        lea eax, ss:[ebp+0x18]
        push eax
        lea ecx, ds:[edi+0x18]
        mov dword ptr ss : [esp+0x14], edi
        mov dword ptr ds : [edi+0x14], edx
        call public_6efac00
        mov ecx, dword ptr ss : [ebp+0x28]
        lea ebx, ss:[ebp+0x2C]
        lea esi, ds:[edi+0x2C]
        cmp esi, ebx
        mov dword ptr ds : [edi+0x28], ecx
        je public_6efab86
        mov eax, dword ptr ds : [ebx+4]
        test eax, eax
        jne public_6efaa3f
        xor edx, edx
        jmp public_6efaa47
        public_6efaa3f : nop
        mov edx, dword ptr ds : [ebx+8]
        sub edx, eax
        sar edx, 7
        public_6efaa47 : nop
        mov eax, dword ptr ds : [esi+4]
        test eax, eax
        jne public_6efaa52
        xor ecx, ecx
        jmp public_6efaa5a
        public_6efaa52 : nop
        mov ecx, dword ptr ds : [esi+8]
        sub ecx, eax
        sar ecx, 7
        public_6efaa5a : nop
        cmp edx, ecx
        ja public_6efaad1
        mov ecx, dword ptr ds : [ebx+8]
        mov edi, dword ptr ds : [ebx+4]
        cmp edi, ecx
        mov dword ptr ss : [esp+0x14], ecx
        mov ebp, eax
        je public_6efaa8c
        mov edi, edi
        public_6efaa70 : nop
        push edi
        mov ecx, ebp
        call public_6ef8560
        mov eax, dword ptr ss : [esp+0x14]
        add edi, 0x80
        add ebp, 0x80
        cmp edi, eax
        jne public_6efaa70
        public_6efaa8c : nop
        mov edi, dword ptr ds : [esi+8]
        cmp ebp, edi
        je public_6efaaa6
        public_6efaa93 : nop
        push 0
        mov ecx, ebp
        call public_6efa720
        add ebp, 0x80
        cmp ebp, edi
        jne public_6efaa93
        public_6efaaa6 : nop
        mov eax, dword ptr ds : [ebx+4]
        test eax, eax
        jne public_6efaab1
        xor ebx, ebx
        jmp public_6efaab9
        public_6efaab1 : nop
        mov ebx, dword ptr ds : [ebx+8]
        sub ebx, eax
        sar ebx, 7
        public_6efaab9 : nop
        mov eax, dword ptr ds : [esi+4]
        mov ebp, dword ptr ss : [esp+0x20]
        mov edi, dword ptr ss : [esp+0x10]
        shl ebx, 7
        add ebx, eax
        mov dword ptr ds : [esi+8], ebx
        jmp public_6efab86
        public_6efaad1 : nop
        mov ecx, dword ptr ds : [ebx+4]
        test ecx, ecx
        jne public_6efaadc
        xor edx, edx
        jmp public_6efaae4
        public_6efaadc : nop
        mov edx, dword ptr ds : [ebx+8]
        sub edx, ecx
        sar edx, 7
        public_6efaae4 : nop
        test eax, eax
        jne public_6efaaec
        xor ecx, ecx
        jmp public_6efaaf4
        public_6efaaec : nop
        mov ecx, dword ptr ds : [esi+0xC]
        sub ecx, eax
        sar ecx, 7
        public_6efaaf4 : nop
        cmp edx, ecx
        ja public_6efab3c
        mov ecx, esi
        call public_6ef6b30
        mov ecx, dword ptr ds : [esi+4]
        mov edi, eax
        mov eax, dword ptr ds : [ebx+4]
        shl edi, 7
        push ecx
        add edi, eax
        push edi
        push eax
        call public_6efae60
        mov edx, dword ptr ds : [esi+8]
        mov eax, dword ptr ds : [ebx+8]
        add esp, 0xC
        push edx
        push eax
        push edi
        mov ecx, esi
        call public_6ef73c0
        mov ecx, ebx
        call public_6ef6b30
        mov ecx, dword ptr ds : [esi+4]
        mov edi, dword ptr ss : [esp+0x10]
        shl eax, 7
        add eax, ecx
        jmp public_6efab83
        public_6efab3c : nop
        mov ecx, dword ptr ds : [esi+8]
        push ecx
        push eax
        mov ecx, esi
        call public_6ef6b50
        mov edx, dword ptr ds : [esi+4]
        push edx
        call public_6fa8fe0
        add esp, 4
        mov ecx, ebx
        call public_6ef6b30
        test eax, eax
        jge public_6efab61
        xor eax, eax
        public_6efab61 : nop
        shl eax, 7
        push eax
        call public_6fa912a
        add esp, 4
        mov dword ptr ds : [esi+4], eax
        mov ecx, dword ptr ds : [ebx+8]
        mov ebx, dword ptr ds : [ebx+4]
        push eax
        push ecx
        push ebx
        mov ecx, esi
        call public_6ef73c0
        mov dword ptr ds : [esi+0xC], eax
        public_6efab83 : nop
        mov dword ptr ds : [esi+8], eax
        public_6efab86 : nop
        mov eax, dword ptr ds : [edi+0x44]
        mov ecx, dword ptr ds : [edi+0x40]
        add edi, 0x3C
        push eax
        push ecx
        mov ecx, edi
        call public_6ef6750
        mov ecx, dword ptr ss : [ebp+0x40]
        test ecx, ecx
        jne public_6efaba3
        xor eax, eax
        jmp public_6efabab
        public_6efaba3 : nop
        mov eax, dword ptr ss : [ebp+0x44]
        sub eax, ecx
        sar eax, 3
        public_6efabab : nop
        push eax
        mov ecx, edi
        call public_6ef7860
        mov esi, dword ptr ss : [ebp+0x40]
        cmp esi, dword ptr ss : [ebp+0x44]
        je public_6efabe9
        nop 
        lea esp, ss:[esp]
        public_6efabc0 : nop
        mov edx, dword ptr ds : [esi]
        mov eax, dword ptr ds : [esi+4]
        lea ecx, ss:[esp+0x14]
        push ecx
        mov dword ptr ss : [esp+0x18], edx
        mov edx, dword ptr ds : [edi+8]
        push 1
        push edx
        mov ecx, edi
        mov dword ptr ss : [esp+0x24], eax
        call public_6f96770
        mov eax, dword ptr ss : [ebp+0x44]
        add esi, 8
        cmp esi, eax
        jne public_6efabc0
        public_6efabe9 : nop
        mov eax, dword ptr ss : [esp+0x10]
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 0xC
        ret 4
        UNREACHABLE_TRAP(0x6efa9e0)
    }
}

#undef public_6efaa3f
#undef public_6efaa47
#undef public_6efaa52
#undef public_6efaa5a
#undef public_6efaa70
#undef public_6efaa8c
#undef public_6efaa93
#undef public_6efaaa6
#undef public_6efaab1
#undef public_6efaab9
#undef public_6efaad1
#undef public_6efaadc
#undef public_6efaae4
#undef public_6efaaec
#undef public_6efaaf4
#undef public_6efab3c
#undef public_6efab61
#undef public_6efab83
#undef public_6efab86
#undef public_6efaba3
#undef public_6efabab
#undef public_6efabc0
#undef public_6efabe9
