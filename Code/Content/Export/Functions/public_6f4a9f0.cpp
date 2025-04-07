#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f4a9f0);
CLANG_FORWARD_PROC_SYMBOL(public_6f4eb70);
CLANG_FORWARD_PROC_SYMBOL(public_6f4eca0);
CLANG_FORWARD_PROC_SYMBOL(public_6f4ece0);
CLANG_FORWARD_PROC_SYMBOL(public_6f96770);

#define public_6f4aa10 _public_6f4aa10
#define public_6f4aa35 _public_6f4aa35
#define public_6f4aa64 _public_6f4aa64
#define public_6f4aa79 _public_6f4aa79
#define public_6f4aa89 _public_6f4aa89
#define public_6f4aa90 _public_6f4aa90
#define public_6f4aab9 _public_6f4aab9
#define public_6f4aabb _public_6f4aabb
#define public_6f4aae3 _public_6f4aae3
#define public_6f4aae9 _public_6f4aae9
#define public_6f4aaf2 _public_6f4aaf2
#define public_6f4aaf4 _public_6f4aaf4
#define public_6f4ab0c _public_6f4ab0c
#define public_6f4ab1c _public_6f4ab1c
#define public_6f4ab2c _public_6f4ab2c
#define public_6f4ab63 _public_6f4ab63
#define public_6f4ab7d _public_6f4ab7d
#define public_6f4ab83 _public_6f4ab83
#define public_6f4ab96 _public_6f4ab96
#define public_6f4ab9c _public_6f4ab9c
#define public_6f4abaf _public_6f4abaf
#define public_6f4abc0 _public_6f4abc0
#define public_6f4ac03 _public_6f4ac03
#define public_6f4ac07 _public_6f4ac07
#define public_6f4ac11 _public_6f4ac11
#define public_6f4ac44 _public_6f4ac44
#define public_6f4ac68 _public_6f4ac68
#define public_6f4ac76 _public_6f4ac76
#define public_6f4ac8c _public_6f4ac8c
#define public_6f4aca0 _public_6f4aca0
#define public_6f4acbf _public_6f4acbf
#define public_6f4acc5 _public_6f4acc5
#define public_6f4acd8 _public_6f4acd8
#define public_6f4acde _public_6f4acde
#define public_6f4ace5 _public_6f4ace5
#define public_6f4acf0 _public_6f4acf0
#define public_6f4ad01 _public_6f4ad01
#define public_6f4ad17 _public_6f4ad17
#define public_6f4ad27 _public_6f4ad27

PROC_DECLARE(0x6f4a9f0, internal_6f4a9f0, public_6f4a9f0);
extern "C" NAKED register_t __cdecl internal_6f4a9f0()
{
    __asm
    {
        sub esp, 0x20
        push ebx
        push ebp
        mov ebp, dword ptr ss : [esp+0x2C]
        push esi
        push edi
        mov ecx, ebp
        call dword ptr ds : [public_6fb3024]
        test al, al
        je public_6f4ab2c
        nop 
        lea esp, ss:[esp]
/*FIXUP public_6f4aa10 : nop
        push offset public_6fbb24c @0x6f4aa10*/
  FIXUP public_6f4aa10 : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fbb24c
        mov ecx, ebp
        call dword ptr ds : [public_6fb301c]
        test al, al
        je public_6f4ab1c
        mov ecx, ebp
        call dword ptr ds : [public_6fb3018]
        test al, al
        je public_6f4ab1c
/*FIXUP public_6f4aa35 : nop
        push offset public_6fbb240 @0x6f4aa35*/
  FIXUP public_6f4aa35 : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fbb240
        mov ecx, ebp
        call dword ptr ds : [public_6fb3014]
        test al, al
        je public_6f4ab0c
        xor edi, edi
        push edi
        mov ecx, ebp
        mov dword ptr ss : [esp+0x14], edi
        mov dword ptr ss : [esp+0x18], edi
        call dword ptr ds : [public_6fb3048]
        mov ebx, eax
        mov esi, offset public_6fce5d0
        public_6f4aa64 : nop
        mov eax, dword ptr ds : [esi]
        test eax, eax
        je public_6f4aa79
        push eax
        push ebx
        call dword ptr ds : [public_6fb3294]
        add esp, 8
        test eax, eax
        je public_6f4aa89
        public_6f4aa79 : nop
        add edi, 8
        add esi, 8
        cmp edi, 0x158
        jb public_6f4aa64
        jmp public_6f4aa90
        public_6f4aa89 : nop
        mov eax, dword ptr ds : [esi+4]
        mov dword ptr ss : [esp+0x34], eax
        public_6f4aa90 : nop
        mov ecx, dword ptr ss : [esp+0x34]
        mov dword ptr ss : [esp+0x10], ecx
        push 1
        mov ecx, ebp
        call dword ptr ds : [public_6fb3044]
        fld dword ptr ds : [public_6fbb228]
        fcomp 
        fnstsw ax
        test ah, 0x41
        jne public_6f4aab9
        fld dword ptr ds : [public_6fbb228]
        jmp public_6f4aabb
        public_6f4aab9 : nop
        fld st(0)
        public_6f4aabb : nop
        fcomp dword ptr ds : [public_6fbb22c]
        fnstsw ax
        test ah, 5
        jp public_6f4aae9
        fld dword ptr ds : [public_6fbb228]
        fcomp 
        fnstsw ax
        test ah, 0x41
        jne public_6f4aae3
        mov edx, dword ptr ds : [public_6fbb228]
        mov dword ptr ss : [esp+0x14], edx
        jmp public_6f4aaf2
        public_6f4aae3 : nop
        fstp dword ptr ss : [esp+0x14]
        jmp public_6f4aaf4
        public_6f4aae9 : nop
        mov eax, dword ptr ds : [public_6fbb22c]
        mov dword ptr ss : [esp+0x14], eax
        public_6f4aaf2 : nop
        fstp st(0)
        public_6f4aaf4 : nop
        mov edx, dword ptr ds : [public_6fd0c40]
        lea ecx, ss:[esp+0x10]
        push ecx
        push 1
        push edx
        mov ecx, offset public_6fd0c38
        call public_6f96770
        public_6f4ab0c : nop
        mov ecx, ebp
        call dword ptr ds : [public_6fb3018]
        test al, al
        jne public_6f4aa35
        public_6f4ab1c : nop
        mov ecx, ebp
        call dword ptr ds : [public_6fb3024]
        test al, al
        jne public_6f4aa10
        public_6f4ab2c : nop
        mov ebx, dword ptr ds : [public_6fd0c40]
        mov ebp, dword ptr ds : [public_6fd0c3c]
        mov eax, ebx
        sub eax, ebp
        sar eax, 3
        cmp eax, 0x10
        mov dword ptr ss : [esp+0x34], ebx
        mov dword ptr ss : [esp+0x10], ebp
        jg public_6f4abaf
        cmp ebp, ebx
        je public_6f4ad27
        lea esi, ss:[ebp+8]
        cmp esi, ebx
        je public_6f4ad27
        mov edi, dword ptr ss : [esp+0x34]
        public_6f4ab63 : nop
        mov ecx, dword ptr ds : [esi]
        cmp ecx, dword ptr ss : [ebp]
        mov edx, dword ptr ds : [esi+4]
        jl public_6f4ab7d
        push edi
        mov eax, edx
        push eax
        push ecx
        push esi
        call public_6f4eca0
        add esp, 0x10
        jmp public_6f4ab9c
        public_6f4ab7d : nop
        cmp ebp, esi
        mov eax, esi
        je public_6f4ab96
        public_6f4ab83 : nop
        mov ebx, dword ptr ds : [eax-8]
        sub eax, 8
        cmp eax, ebp
        mov dword ptr ds : [eax+8], ebx
        mov ebx, dword ptr ds : [eax+4]
        mov dword ptr ds : [eax+0xC], ebx
        jne public_6f4ab83
        public_6f4ab96 : nop
        mov dword ptr ss : [ebp], ecx
        mov dword ptr ss : [ebp+4], edx
        public_6f4ab9c : nop
        mov eax, dword ptr ss : [esp+0x34]
        add esi, 8
        cmp esi, eax
        jne public_6f4ab63
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 0x20
        ret 
        public_6f4abaf : nop
        cmp eax, 0x10
        mov edi, ebp
        jle public_6f4ac8c
        lea ebx, ds:[ebx]
        public_6f4abc0 : nop
        mov edx, dword ptr ss : [esp+0x34]
        mov eax, dword ptr ds : [ebx-4]
        mov ecx, dword ptr ds : [ebx-8]
        push edx
        push eax
        mov eax, ebx
        sub eax, edi
        sar eax, 3
        cdq 
        sub eax, edx
        push ecx
        mov ecx, dword ptr ds : [edi+4]
        sar eax, 1
        mov edx, dword ptr ds : [edi+eax*8+4]
        mov eax, dword ptr ds : [edi+eax*8]
        push edx
        mov edx, dword ptr ds : [edi]
        push eax
        push ecx
        push edx
        lea eax, ss:[esp+0x3C]
        push eax
        call public_6f4ece0
        mov edx, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [eax]
        add esp, 0x20
        mov dword ptr ss : [esp+0x2C], edx
        mov eax, ebx
        mov esi, edi
        public_6f4ac03 : nop
        cmp dword ptr ds : [esi], ecx
        jge public_6f4ac11
        public_6f4ac07 : nop
        mov edx, dword ptr ds : [esi+8]
        add esi, 8
        cmp edx, ecx
        jl public_6f4ac07
        public_6f4ac11 : nop
        mov edx, dword ptr ds : [eax-8]
        sub eax, 8
        cmp ecx, edx
        jl public_6f4ac11
        cmp eax, esi
        jbe public_6f4ac44
        mov ebp, dword ptr ds : [esi+4]
        mov edx, dword ptr ds : [esi]
        mov dword ptr ss : [esp+0x1C], ebp
        mov ebp, dword ptr ds : [eax]
        mov dword ptr ds : [esi], ebp
        mov ebp, dword ptr ds : [eax+4]
        mov dword ptr ds : [esi+4], ebp
        mov ebp, dword ptr ss : [esp+0x10]
        mov dword ptr ds : [eax], edx
        mov edx, dword ptr ss : [esp+0x1C]
        mov dword ptr ds : [eax+4], edx
        add esi, 8
        jmp public_6f4ac03
        public_6f4ac44 : nop
        mov eax, esi
        mov ecx, ebx
        sub eax, edi
        sub ecx, esi
        and eax, 0xFFFFFFF8
        and ecx, 0xFFFFFFF8
        cmp ecx, eax
        push 0
        jg public_6f4ac68
        mov edx, dword ptr ss : [esp+0x38]
        push edx
        push ebx
        push esi
        call public_6f4eb70
        mov ebx, esi
        jmp public_6f4ac76
        public_6f4ac68 : nop
        mov eax, dword ptr ss : [esp+0x38]
        push eax
        push esi
        push edi
        call public_6f4eb70
        mov edi, esi
        public_6f4ac76 : nop
        mov ecx, ebx
        sub ecx, edi
        and ecx, 0xFFFFFFF8
        add esp, 0x10
        cmp ecx, 0x80
        jg public_6f4abc0
        public_6f4ac8c : nop
        lea edi, ss:[ebp+0x80]
        cmp ebp, edi
        je public_6f4ace5
        lea esi, ss:[ebp+8]
        cmp esi, edi
        je public_6f4ace5
        lea ecx, ds:[ecx]
        public_6f4aca0 : nop
        mov ecx, dword ptr ds : [esi]
        cmp ecx, dword ptr ss : [ebp]
        mov edx, dword ptr ds : [esi+4]
        jl public_6f4acbf
        mov edx, dword ptr ss : [esp+0x34]
        mov eax, dword ptr ds : [esi+4]
        push edx
        push eax
        push ecx
        push esi
        call public_6f4eca0
        add esp, 0x10
        jmp public_6f4acde
        public_6f4acbf : nop
        cmp ebp, esi
        mov eax, esi
        je public_6f4acd8
        public_6f4acc5 : nop
        mov ebx, dword ptr ds : [eax-8]
        sub eax, 8
        cmp eax, ebp
        mov dword ptr ds : [eax+8], ebx
        mov ebx, dword ptr ds : [eax+4]
        mov dword ptr ds : [eax+0xC], ebx
        jne public_6f4acc5
        public_6f4acd8 : nop
        mov dword ptr ss : [ebp], ecx
        mov dword ptr ss : [ebp+4], edx
        public_6f4acde : nop
        add esi, 8
        cmp esi, edi
        jne public_6f4aca0
        public_6f4ace5 : nop
        mov eax, dword ptr ss : [esp+0x34]
        mov edx, edi
        cmp edx, eax
        je public_6f4ad27
        nop 
        public_6f4acf0 : nop
        mov esi, dword ptr ds : [edx]
        mov ebx, dword ptr ds : [edx-8]
        cmp esi, ebx
        mov edi, dword ptr ds : [edx+4]
        lea eax, ds:[edx-8]
        mov ecx, edx
        jge public_6f4ad17
        public_6f4ad01 : nop
        mov ebx, dword ptr ds : [eax]
        mov dword ptr ds : [ecx], ebx
        mov ebx, dword ptr ds : [eax+4]
        mov dword ptr ds : [ecx+4], ebx
        mov ebx, dword ptr ds : [eax-8]
        mov ecx, eax
        sub eax, 8
        cmp esi, ebx
        jl public_6f4ad01
        public_6f4ad17 : nop
        mov eax, dword ptr ss : [esp+0x34]
        add edx, 8
        cmp edx, eax
        mov dword ptr ds : [ecx], esi
        mov dword ptr ds : [ecx+4], edi
        jne public_6f4acf0
        public_6f4ad27 : nop
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 0x20
        ret 
        UNREACHABLE_TRAP(0x6f4a9f0)
    }
}

#undef public_6f4aa10
#undef public_6f4aa35
#undef public_6f4aa64
#undef public_6f4aa79
#undef public_6f4aa89
#undef public_6f4aa90
#undef public_6f4aab9
#undef public_6f4aabb
#undef public_6f4aae3
#undef public_6f4aae9
#undef public_6f4aaf2
#undef public_6f4aaf4
#undef public_6f4ab0c
#undef public_6f4ab1c
#undef public_6f4ab2c
#undef public_6f4ab63
#undef public_6f4ab7d
#undef public_6f4ab83
#undef public_6f4ab96
#undef public_6f4ab9c
#undef public_6f4abaf
#undef public_6f4abc0
#undef public_6f4ac03
#undef public_6f4ac07
#undef public_6f4ac11
#undef public_6f4ac44
#undef public_6f4ac68
#undef public_6f4ac76
#undef public_6f4ac8c
#undef public_6f4aca0
#undef public_6f4acbf
#undef public_6f4acc5
#undef public_6f4acd8
#undef public_6f4acde
#undef public_6f4ace5
#undef public_6f4acf0
#undef public_6f4ad01
#undef public_6f4ad17
#undef public_6f4ad27
