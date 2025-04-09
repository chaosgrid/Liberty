#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_46c8c0);
CLANG_FORWARD_PROC_SYMBOL(public_52a690);
CLANG_FORWARD_PROC_SYMBOL(public_52af60);
CLANG_FORWARD_PROC_SYMBOL(public_52afa0);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e1d);

#define public_52a6a1 _public_52a6a1
#define public_52a6b4 _public_52a6b4
#define public_52a6d0 _public_52a6d0
#define public_52a6dd _public_52a6dd
#define public_52a6e5 _public_52a6e5
#define public_52a6ef _public_52a6ef
#define public_52a6f6 _public_52a6f6
#define public_52a6fa _public_52a6fa
#define public_52a724 _public_52a724
#define public_52a74e _public_52a74e
#define public_52a770 _public_52a770
#define public_52a774 _public_52a774
#define public_52a797 _public_52a797

PROC_DECLARE(0x52a690, internal_52a690, public_52a690);
extern "C" NAKED register_t __cdecl internal_52a690()
{
    __asm
    {
        mov edx, dword ptr ds : [public_675404]
        sub esp, 8
        push esi
        mov esi, dword ptr ds : [edx]
        cmp esi, edx
        push edi
        je public_52a6fa
        public_52a6a1 : nop
        mov ecx, dword ptr ds : [esi+0x10]
        test ecx, ecx
        je public_52a6b4
        mov eax, dword ptr ds : [ecx]
        push 1
        call dword ptr ds : [eax]
        mov edx, dword ptr ds : [public_675404]
        public_52a6b4 : nop
        mov eax, dword ptr ds : [esi+8]
        mov cl, byte ptr ds : [eax+0x15]
        test cl, cl
        jne public_52a6dd
        mov esi, eax
        mov eax, dword ptr ds : [esi]
        mov cl, byte ptr ds : [eax+0x15]
        test cl, cl
        jne public_52a6f6
        lea esp, ss:[esp]
        public_52a6d0 : nop
        mov esi, eax
        mov eax, dword ptr ds : [esi]
        mov cl, byte ptr ds : [eax+0x15]
        test cl, cl
        je public_52a6d0
        jmp public_52a6f6
        public_52a6dd : nop
        mov eax, dword ptr ds : [esi+4]
        cmp esi, dword ptr ds : [eax+8]
        jne public_52a6ef
        public_52a6e5 : nop
        mov esi, eax
        mov eax, dword ptr ds : [eax+4]
        cmp esi, dword ptr ds : [eax+8]
        je public_52a6e5
        public_52a6ef : nop
        cmp dword ptr ds : [esi+8], eax
        je public_52a6f6
        mov esi, eax
        public_52a6f6 : nop
        cmp esi, edx
        jne public_52a6a1
        public_52a6fa : nop
        mov ecx, dword ptr ds : [public_675410]
        test ecx, ecx
        mov eax, dword ptr ds : [edx]
        mov edi, edx
        mov dword ptr ss : [esp+8], eax
        je public_52a770
        mov ecx, eax
        cmp eax, ecx
        jne public_52a770
        cmp edi, edx
        jne public_52a770
        mov edi, dword ptr ds : [edx+4]
        mov eax, dword ptr ds : [public_675408]
        cmp edi, eax
        mov esi, edi
        je public_52a74e
        public_52a724 : nop
        mov ecx, dword ptr ds : [esi+8]
        push ecx
        mov ecx, offset public_675400
        call public_52af60
        mov esi, dword ptr ds : [esi]
        push edi
        call public_5b7e1d
        mov eax, dword ptr ds : [public_675408]
        add esp, 4
        cmp esi, eax
        mov edi, esi
        jne public_52a724
        mov edx, dword ptr ds : [public_675404]
        public_52a74e : nop
        mov dword ptr ds : [edx+4], eax
        mov eax, dword ptr ds : [public_675404]
        mov dword ptr ds : [public_675410], 0
        mov dword ptr ds : [eax], eax
        mov eax, dword ptr ds : [public_675404]
        pop edi
        mov dword ptr ds : [eax+8], eax
        pop esi
        add esp, 8
        ret 
        public_52a770 : nop
        cmp eax, edi
        je public_52a797
        public_52a774 : nop
        lea ecx, ss:[esp+8]
        mov esi, eax
        call public_52afa0
        push esi
        lea edx, ss:[esp+0x10]
        push edx
        mov ecx, offset public_675400
        call public_46c8c0
        mov eax, dword ptr ss : [esp+8]
        cmp eax, edi
        jne public_52a774
        public_52a797 : nop
        pop edi
        pop esi
        add esp, 8
        ret 
        UNREACHABLE_TRAP(0x52a690)
    }
}

#undef public_52a6a1
#undef public_52a6b4
#undef public_52a6d0
#undef public_52a6dd
#undef public_52a6e5
#undef public_52a6ef
#undef public_52a6f6
#undef public_52a6fa
#undef public_52a724
#undef public_52a74e
#undef public_52a770
#undef public_52a774
#undef public_52a797
