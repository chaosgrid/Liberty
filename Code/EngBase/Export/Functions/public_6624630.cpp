#include "EngBase-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6624630);
CLANG_FORWARD_PROC_SYMBOL(public_66251e0);
CLANG_FORWARD_PROC_SYMBOL(public_66254b0);

#define public_662469d _public_662469d
#define public_66246b1 _public_66246b1
#define public_66246b7 _public_66246b7
#define public_66246c5 _public_66246c5
#define public_6624706 _public_6624706
#define public_662471f _public_662471f
#define public_6624732 _public_6624732
#define public_662473d _public_662473d
#define public_6624740 _public_6624740
#define public_6624745 _public_6624745
#define public_662476e _public_662476e
#define public_6624787 _public_6624787
#define public_662479a _public_662479a
#define public_66247a4 _public_66247a4
#define public_66247c7 _public_66247c7
#define public_66247df _public_66247df
#define public_66247f2 _public_66247f2
#define public_66247ff _public_66247ff
#define public_6624801 _public_6624801
#define public_6624807 _public_6624807
#define public_6624830 _public_6624830
#define public_6624843 _public_6624843
#define public_662484e _public_662484e
#define public_6624851 _public_6624851
#define public_6624853 _public_6624853
#define public_6624856 _public_6624856
#define public_6624862 _public_6624862

PROC_DECLARE(0x6624630, internal_6624630, public_6624630);
extern "C" NAKED register_t __cdecl internal_6624630()
{
    __asm
    {
        push ebx
        push ebp
        push esi
        push edi
        push 0x18
        mov esi, ecx
        call public_66251e0
        mov edi, dword ptr ss : [esp+0x1C]
        mov ebp, dword ptr ss : [esp+0x20]
        mov ebx, eax
        push ebp
        mov dword ptr ds : [ebx+4], edi
        mov byte ptr ds : [ebx+0x14], 0
        mov byte ptr ds : [ebx+0x15], 0
        mov eax, dword ptr ds : [esi+8]
        mov dword ptr ds : [ebx], eax
        mov ecx, dword ptr ds : [esi+8]
        lea edx, ds:[ebx+0xC]
        mov dword ptr ds : [ebx+8], ecx
        push edx
        call public_66254b0
        mov ecx, dword ptr ds : [esi+0x10]
        mov eax, dword ptr ds : [esi+4]
        add esp, 8
        inc ecx
        cmp edi, eax
        mov dword ptr ds : [esi+0x10], ecx
        je public_662469d
        mov eax, dword ptr ss : [esp+0x18]
        mov ecx, dword ptr ds : [esi+8]
        cmp eax, ecx
        jne public_662469d
        mov ecx, dword ptr ss : [ebp]
        mov eax, dword ptr ds : [edi+0xC]
        cmp ecx, eax
        jb public_662469d
        mov dword ptr ds : [edi+8], ebx
        mov eax, dword ptr ds : [esi+4]
        cmp edi, dword ptr ds : [eax+8]
        jne public_66246b7
        mov dword ptr ds : [eax+8], ebx
        jmp public_66246b7
        public_662469d : nop
        mov dword ptr ds : [edi], ebx
        mov eax, dword ptr ds : [esi+4]
        cmp edi, eax
        jne public_66246b1
        mov dword ptr ds : [eax+4], ebx
        mov edx, dword ptr ds : [esi+4]
        mov dword ptr ds : [edx+8], ebx
        jmp public_66246b7
        public_66246b1 : nop
        cmp edi, dword ptr ds : [eax]
        jne public_66246b7
        mov dword ptr ds : [eax], ebx
        public_66246b7 : nop
        mov ecx, dword ptr ds : [esi+4]
        mov eax, ebx
        cmp ebx, dword ptr ds : [ecx+4]
        je public_6624862
        public_66246c5 : nop
        mov ecx, dword ptr ds : [eax+4]
        mov dl, byte ptr ds : [ecx+0x14]
        test dl, dl
        jne public_6624862
        mov edi, dword ptr ds : [ecx+4]
        mov edx, dword ptr ds : [edi]
        cmp ecx, edx
        jne public_66247a4
        mov edx, dword ptr ds : [edi+8]
        cmp byte ptr ds : [edx+0x14], 0
        jne public_6624706
        mov byte ptr ds : [ecx+0x14], 1
        mov byte ptr ds : [edx+0x14], 1
        mov edx, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [edx+4]
        mov byte ptr ds : [ecx+0x14], 0
        mov edx, dword ptr ds : [eax+4]
        mov eax, dword ptr ds : [edx+4]
        jmp public_6624856
        public_6624706 : nop
        cmp eax, dword ptr ds : [ecx+8]
        jne public_6624745
        mov eax, ecx
        mov ecx, dword ptr ds : [eax+8]
        mov edx, dword ptr ds : [ecx]
        mov dword ptr ds : [eax+8], edx
        mov edx, dword ptr ds : [ecx]
        cmp edx, dword ptr ds : [esi+8]
        je public_662471f
        mov dword ptr ds : [edx+4], eax
        public_662471f : nop
        mov edx, dword ptr ds : [eax+4]
        mov dword ptr ds : [ecx+4], edx
        mov edx, dword ptr ds : [esi+4]
        cmp eax, dword ptr ds : [edx+4]
        jne public_6624732
        mov dword ptr ds : [edx+4], ecx
        jmp public_6624740
        public_6624732 : nop
        mov edx, dword ptr ds : [eax+4]
        cmp eax, dword ptr ds : [edx]
        jne public_662473d
        mov dword ptr ds : [edx], ecx
        jmp public_6624740
        public_662473d : nop
        mov dword ptr ds : [edx+8], ecx
        public_6624740 : nop
        mov dword ptr ds : [ecx], eax
        mov dword ptr ds : [eax+4], ecx
        public_6624745 : nop
        mov ecx, dword ptr ds : [eax+4]
        mov byte ptr ds : [ecx+0x14], 1
        mov edx, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [edx+4]
        mov byte ptr ds : [ecx+0x14], 0
        mov edx, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [edx+4]
        mov edx, dword ptr ds : [ecx]
        mov edi, dword ptr ds : [edx+8]
        mov dword ptr ds : [ecx], edi
        mov edi, dword ptr ds : [edx+8]
        cmp edi, dword ptr ds : [esi+8]
        je public_662476e
        mov dword ptr ds : [edi+4], ecx
        public_662476e : nop
        mov edi, dword ptr ds : [ecx+4]
        mov dword ptr ds : [edx+4], edi
        mov edi, dword ptr ds : [esi+4]
        cmp ecx, dword ptr ds : [edi+4]
        jne public_6624787
        mov dword ptr ds : [edi+4], edx
        mov dword ptr ds : [edx+8], ecx
        jmp public_6624853
        public_6624787 : nop
        mov edi, dword ptr ds : [ecx+4]
        cmp ecx, dword ptr ds : [edi+8]
        jne public_662479a
        mov dword ptr ds : [edi+8], edx
        mov dword ptr ds : [edx+8], ecx
        jmp public_6624853
        public_662479a : nop
        mov dword ptr ds : [edi], edx
        mov dword ptr ds : [edx+8], ecx
        jmp public_6624853
        public_66247a4 : nop
        cmp byte ptr ds : [edx+0x14], 0
        jne public_66247c7
        mov byte ptr ds : [ecx+0x14], 1
        mov byte ptr ds : [edx+0x14], 1
        mov ecx, dword ptr ds : [eax+4]
        mov edx, dword ptr ds : [ecx+4]
        mov byte ptr ds : [edx+0x14], 0
        mov eax, dword ptr ds : [eax+4]
        mov eax, dword ptr ds : [eax+4]
        jmp public_6624856
        public_66247c7 : nop
        cmp eax, dword ptr ds : [ecx]
        jne public_6624807
        mov eax, ecx
        mov ecx, dword ptr ds : [eax]
        mov edx, dword ptr ds : [ecx+8]
        mov dword ptr ds : [eax], edx
        mov edx, dword ptr ds : [ecx+8]
        cmp edx, dword ptr ds : [esi+8]
        je public_66247df
        mov dword ptr ds : [edx+4], eax
        public_66247df : nop
        mov edx, dword ptr ds : [eax+4]
        mov dword ptr ds : [ecx+4], edx
        mov edx, dword ptr ds : [esi+4]
        cmp eax, dword ptr ds : [edx+4]
        jne public_66247f2
        mov dword ptr ds : [edx+4], ecx
        jmp public_6624801
        public_66247f2 : nop
        mov edx, dword ptr ds : [eax+4]
        cmp eax, dword ptr ds : [edx+8]
        jne public_66247ff
        mov dword ptr ds : [edx+8], ecx
        jmp public_6624801
        public_66247ff : nop
        mov dword ptr ds : [edx], ecx
        public_6624801 : nop
        mov dword ptr ds : [ecx+8], eax
        mov dword ptr ds : [eax+4], ecx
        public_6624807 : nop
        mov ecx, dword ptr ds : [eax+4]
        mov byte ptr ds : [ecx+0x14], 1
        mov edx, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [edx+4]
        mov byte ptr ds : [ecx+0x14], 0
        mov edx, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [edx+4]
        mov edx, dword ptr ds : [ecx+8]
        mov edi, dword ptr ds : [edx]
        mov dword ptr ds : [ecx+8], edi
        mov edi, dword ptr ds : [edx]
        cmp edi, dword ptr ds : [esi+8]
        je public_6624830
        mov dword ptr ds : [edi+4], ecx
        public_6624830 : nop
        mov edi, dword ptr ds : [ecx+4]
        mov dword ptr ds : [edx+4], edi
        mov edi, dword ptr ds : [esi+4]
        cmp ecx, dword ptr ds : [edi+4]
        jne public_6624843
        mov dword ptr ds : [edi+4], edx
        jmp public_6624851
        public_6624843 : nop
        mov edi, dword ptr ds : [ecx+4]
        cmp ecx, dword ptr ds : [edi]
        jne public_662484e
        mov dword ptr ds : [edi], edx
        jmp public_6624851
        public_662484e : nop
        mov dword ptr ds : [edi+8], edx
        public_6624851 : nop
        mov dword ptr ds : [edx], ecx
        public_6624853 : nop
        mov dword ptr ds : [ecx+4], edx
        public_6624856 : nop
        mov ecx, dword ptr ds : [esi+4]
        cmp eax, dword ptr ds : [ecx+4]
        jne public_66246c5
        public_6624862 : nop
        mov edx, dword ptr ds : [esi+4]
        pop edi
        pop esi
        pop ebp
        mov eax, dword ptr ds : [edx+4]
        mov byte ptr ds : [eax+0x14], 1
        mov eax, dword ptr ss : [esp+8]
        mov dword ptr ds : [eax], ebx
        pop ebx
        ret 0x10
        UNREACHABLE_TRAP(0x6624630)
    }
}

#undef public_662469d
#undef public_66246b1
#undef public_66246b7
#undef public_66246c5
#undef public_6624706
#undef public_662471f
#undef public_6624732
#undef public_662473d
#undef public_6624740
#undef public_6624745
#undef public_662476e
#undef public_6624787
#undef public_662479a
#undef public_66247a4
#undef public_66247c7
#undef public_66247df
#undef public_66247f2
#undef public_66247ff
#undef public_6624801
#undef public_6624807
#undef public_6624830
#undef public_6624843
#undef public_662484e
#undef public_6624851
#undef public_6624853
#undef public_6624856
#undef public_6624862
