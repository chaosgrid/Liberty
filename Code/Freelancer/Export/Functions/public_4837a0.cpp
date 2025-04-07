#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_437d90);
CLANG_FORWARD_PROC_SYMBOL(public_43a510);
CLANG_FORWARD_PROC_SYMBOL(public_47f040);
CLANG_FORWARD_PROC_SYMBOL(public_483580);
CLANG_FORWARD_PROC_SYMBOL(public_4837a0);
CLANG_FORWARD_PROC_SYMBOL(public_4c3e10);
CLANG_FORWARD_PROC_SYMBOL(public_4c4610);
CLANG_FORWARD_PROC_SYMBOL(public_4c4640);
CLANG_FORWARD_PROC_SYMBOL(public_4c4ce0);
CLANG_FORWARD_PROC_SYMBOL(public_585f20);
CLANG_FORWARD_PROC_SYMBOL(public_5b7ec0);

#define public_4837ce _public_4837ce
#define public_483835 _public_483835
#define public_483870 _public_483870
#define public_4838a0 _public_4838a0
#define public_4838be _public_4838be
#define public_4838c6 _public_4838c6
#define public_4838d2 _public_4838d2
#define public_483920 _public_483920
#define public_483923 _public_483923
#define public_483932 _public_483932
#define public_48393b _public_48393b
#define public_483941 _public_483941
#define public_483965 _public_483965
#define public_483982 _public_483982
#define public_48398c _public_48398c
#define public_4839a1 _public_4839a1
#define public_4839e6 _public_4839e6
#define public_4839fa _public_4839fa
#define public_483a0a _public_483a0a
#define public_483a32 _public_483a32
#define public_483a46 _public_483a46
#define public_483a54 _public_483a54
#define public_483a56 _public_483a56
#define public_483a95 _public_483a95
#define public_483a9b _public_483a9b
#define public_483ab5 _public_483ab5
#define public_483ad4 _public_483ad4
#define public_483ad6 _public_483ad6

PROC_DECLARE(0x4837a0, internal_4837a0, public_4837a0);
extern "C" NAKED register_t __cdecl internal_4837a0()
{
    __asm
    {
        sub esp, 8
        push ebx
        push ebp
        mov ebp, dword ptr ss : [esp+0x18]
        push esi
        push edi
        mov ebx, ecx
        mov dword ptr ss : [ebp], 0
        call public_4c3e10
        test eax, eax
        jne public_4837ce
        pop edi
        pop esi
        mov dword ptr ss : [ebp], 3
        pop ebp
        pop ebx
        add esp, 8
        ret 8
        public_4837ce : nop
        mov esi, dword ptr ss : [esp+0x1C]
        test esi, esi
        je public_483ad4
        mov eax, dword ptr ds : [public_66873c]
        push eax
        mov ecx, offset public_668708
        call public_43a510
        push esi
        mov ecx, eax
        call public_437d90
        mov esi, eax
        test esi, esi
        je public_483ad4
        mov eax, dword ptr ds : [esi+0x1C]
        test eax, eax
        jle public_483ad4
        mov eax, dword ptr ds : [esi]
        push eax
        mov ecx, ebx
        call public_47f040
        mov edi, eax
        call public_4c4ce0
        xor edx, edx
        div edi
        mov edi, eax
        test edi, edi
        jg public_483835
        pop edi
        pop esi
        mov dword ptr ss : [ebp], 2
        pop ebp
        xor eax, eax
        pop ebx
        add esp, 8
        ret 8
        public_483835 : nop
        mov eax, dword ptr ds : [ebx+0x974]
        test eax, eax
        je public_4838d2
        lea ecx, ds:[eax+0x394]
        mov eax, dword ptr ds : [ecx]
        cmp byte ptr ds : [eax], 0
        jne public_4838a0
        call dword ptr ds : [public_5c69a0]
        mov ecx, ebx
        call public_483580
        test eax, eax
        je public_4838a0
        mov ecx, dword ptr ds : [ebx+0x32C]
        test ecx, ecx
        je public_483870
        cmp ecx, 2
        jne public_4838a0
        public_483870 : nop
        mov ecx, dword ptr ds : [ebx+0x974]
        mov ecx, dword ptr ds : [ecx+0x330]
        push 0
        push eax
        call public_585f20
        test eax, eax
        je public_4838a0
        push 0
        push eax
        call dword ptr ds : [public_5c6028]
        mov edx, dword ptr ds : [ebx+0x974]
        add esp, 8
        mov dword ptr ds : [edx+0x394], eax
        public_4838a0 : nop
        mov eax, dword ptr ds : [ebx+0x974]
        mov ecx, dword ptr ds : [eax+0x394]
        cmp byte ptr ds : [ecx], 0
        je public_4838d2
        mov eax, dword ptr ds : [esi+0x1C]
        cmp eax, 1
        jle public_4838be
        mov eax, 1
        public_4838be : nop
        cmp edi, eax
        jge public_483ad6
        public_4838c6 : nop
        mov eax, edi
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 8
        ret 8
        public_4838d2 : nop
        mov eax, dword ptr ds : [esi]
        push eax
        call dword ptr ds : [public_5c6360]
        add esp, 4
        test eax, eax
        mov dword ptr ss : [esp+0x1C], eax
        je public_483920
        push eax
        call dword ptr ds : [public_5c603c]
        add esp, 4
        test eax, eax
        je public_483920
        fld dword ptr ds : [eax+0x5C]
        fst dword ptr ss : [esp+0x14]
        fcomp dword ptr ds : [public_5c7474]
        fnstsw ax
        test ah, 0x44
        jnp public_483920
        call public_4c4610
        fstp dword ptr ss : [esp+0x10]
        call public_4c4640
        fsubr dword ptr ss : [esp+0x10]
        fdiv dword ptr ss : [esp+0x14]
        jmp public_483923
        public_483920 : nop
        fild dword ptr ds : [esi+0x1C]
        public_483923 : nop
        call public_5b7ec0
        cmp edi, eax
        mov dword ptr ss : [esp+0x14], eax
        jl public_483932
        mov edi, eax
        public_483932 : nop
        mov esi, dword ptr ds : [esi+0x1C]
        cmp edi, esi
        jl public_48393b
        mov edi, esi
        public_48393b : nop
        test edi, edi
        jge public_483941
        xor edi, edi
        public_483941 : nop
        mov edx, dword ptr ds : [ebx+0x974]
        mov eax, dword ptr ds : [edx+0x32C]
        test eax, eax
        mov ebp, dword ptr ds : [public_5c6384]
        je public_483965
        cmp eax, 2
        je public_483965
        cmp eax, 3
        jne public_483a56
        public_483965 : nop
        cmp eax, 3
        mov edx, dword ptr ds : [public_674a88]
        mov ecx, dword ptr ds : [public_674a8c]
        mov esi, dword ptr ss : [esp+0x1C]
        jne public_483982
        cmp esi, ecx
        je public_48398c
        cmp esi, edx
        je public_48398c
        public_483982 : nop
        cmp edi, 1
        jle public_48398c
        mov edi, 1
        public_48398c : nop
        cmp eax, 3
        jne public_483a56
        cmp esi, ecx
        je public_4839a1
        cmp esi, edx
        jne public_483a56
        public_4839a1 : nop
        call public_4c3e10
        push eax
        call dword ptr ds : [public_5c61fc]
        mov esi, eax
        add esp, 4
        test esi, esi
        je public_483a56
        mov eax, dword ptr ds : [public_674a8c]
        mov ecx, dword ptr ss : [esp+0x1C]
        cmp ecx, eax
        jne public_483a0a
        mov ecx, dword ptr ds : [ebx+0x974]
        push 0x3F800000
        push 0
        push eax
        add ecx, 0x34C
        call ebp
        xor ecx, ecx
        test eax, eax
        je public_4839e6
        mov ecx, dword ptr ds : [eax+0x14]
        public_4839e6 : nop
        mov edx, dword ptr ds : [esi+0x140]
        mov eax, edx
        sub eax, ecx
        cmp edi, eax
        jle public_4839fa
        test edx, edx
        jl public_4839fa
        mov edi, eax
        public_4839fa : nop
        test edi, edi
        jg public_483a56
        mov eax, dword ptr ss : [esp+0x20]
        mov dword ptr ds : [eax], 9
        jmp public_483a54
        public_483a0a : nop
        mov eax, dword ptr ds : [public_674a88]
        cmp ecx, eax
        jne public_483a56
        mov ecx, dword ptr ds : [ebx+0x974]
        push 0x3F800000
        push 0
        push eax
        add ecx, 0x34C
        call ebp
        xor ecx, ecx
        test eax, eax
        je public_483a32
        mov ecx, dword ptr ds : [eax+0x14]
        public_483a32 : nop
        mov edx, dword ptr ds : [esi+0x144]
        mov eax, edx
        sub eax, ecx
        cmp edi, eax
        jle public_483a46
        test edx, edx
        jl public_483a46
        mov edi, eax
        public_483a46 : nop
        test edi, edi
        jg public_483a56
        mov ecx, dword ptr ss : [esp+0x20]
        mov dword ptr ds : [ecx], 0xA
        public_483a54 : nop
        xor edi, edi
        public_483a56 : nop
        mov eax, dword ptr ds : [ebx+0x974]
        cmp dword ptr ds : [eax+0x32C], 1
        jne public_483ab5
        mov edx, dword ptr ss : [esp+0x20]
        cmp dword ptr ds : [edx], 0
        jne public_4838c6
        mov ecx, dword ptr ds : [public_5c6398]
        mov edx, dword ptr ss : [esp+0x1C]
        mov esi, dword ptr ds : [ecx]
        push 0x3F800000
        push 0
        push edx
        lea ecx, ds:[eax+0x34C]
        call ebp
        test eax, eax
        je public_483a95
        sub esi, dword ptr ds : [eax+0x14]
        public_483a95 : nop
        cmp edi, esi
        jle public_483a9b
        mov edi, esi
        public_483a9b : nop
        test edi, edi
        jg public_483ab5
        mov eax, dword ptr ss : [esp+0x20]
        pop edi
        pop esi
        pop ebp
        mov dword ptr ds : [eax], 0xB
        xor eax, eax
        pop ebx
        add esp, 8
        ret 8
        public_483ab5 : nop
        mov eax, dword ptr ss : [esp+0x20]
        cmp dword ptr ds : [eax], 0
        jne public_4838c6
        mov ecx, dword ptr ss : [esp+0x14]
        test ecx, ecx
        jg public_4838c6
        mov dword ptr ds : [eax], 1
        public_483ad4 : nop
        xor eax, eax
        public_483ad6 : nop
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 8
        ret 8
        UNREACHABLE_TRAP(0x4837a0)
    }
}

#undef public_4837ce
#undef public_483835
#undef public_483870
#undef public_4838a0
#undef public_4838be
#undef public_4838c6
#undef public_4838d2
#undef public_483920
#undef public_483923
#undef public_483932
#undef public_48393b
#undef public_483941
#undef public_483965
#undef public_483982
#undef public_48398c
#undef public_4839a1
#undef public_4839e6
#undef public_4839fa
#undef public_483a0a
#undef public_483a32
#undef public_483a46
#undef public_483a54
#undef public_483a56
#undef public_483a95
#undef public_483a9b
#undef public_483ab5
#undef public_483ad4
#undef public_483ad6
