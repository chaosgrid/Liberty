#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_51eda0);
CLANG_FORWARD_PROC_SYMBOL(public_51fc90);
CLANG_FORWARD_PROC_SYMBOL(public_51fd90);

#define public_51edb0 _public_51edb0
#define public_51edd8 _public_51edd8
#define public_51edf0 _public_51edf0
#define public_51ee09 _public_51ee09
#define public_51ee11 _public_51ee11
#define public_51ee17 _public_51ee17
#define public_51ee24 _public_51ee24
#define public_51ee27 _public_51ee27
#define public_51ee33 _public_51ee33
#define public_51ee40 _public_51ee40
#define public_51ee7f _public_51ee7f
#define public_51ee8c _public_51ee8c
#define public_51ee90 _public_51ee90
#define public_51ee9f _public_51ee9f
#define public_51eea1 _public_51eea1
#define public_51eed5 _public_51eed5
#define public_51eee3 _public_51eee3
#define public_51eefa _public_51eefa
#define public_51ef08 _public_51ef08
#define public_51ef20 _public_51ef20
#define public_51ef39 _public_51ef39
#define public_51ef41 _public_51ef41
#define public_51ef47 _public_51ef47
#define public_51ef54 _public_51ef54
#define public_51ef57 _public_51ef57
#define public_51ef61 _public_51ef61
#define public_51ef65 _public_51ef65
#define public_51ef70 _public_51ef70
#define public_51ef89 _public_51ef89
#define public_51ef96 _public_51ef96

PROC_DECLARE(0x51eda0, internal_51eda0, public_51eda0);
extern "C" NAKED register_t __cdecl internal_51eda0()
{
    __asm
    {
        sub esp, 8
        push ebx
        push ebp
        mov eax, offset public_6752f4
        push esi
        mov dword ptr ss : [esp+0x10], eax
        push edi
        public_51edb0 : nop
        mov ecx, dword ptr ds : [eax+4]
        mov ebp, dword ptr ds : [eax]
        mov eax, ecx
        sub eax, ebp
        sar eax, 2
        cmp eax, 0x10
        mov dword ptr ss : [esp+0x10], ecx
        jg public_51ee33
        cmp ebp, ecx
        je public_51ef96
        lea edi, ss:[ebp+4]
        cmp edi, ecx
        je public_51ef96
        public_51edd8 : nop
        mov ebx, dword ptr ds : [edi]
        mov eax, dword ptr ss : [ebp]
        fld dword ptr ds : [ebx+4]
        fcomp dword ptr ds : [eax+4]
        fnstsw ax
        test ah, 0x41
        je public_51ee11
        mov esi, edi
        mov ecx, edi
        mov edi, edi
        public_51edf0 : nop
        mov edx, dword ptr ds : [ecx-4]
        fld dword ptr ds : [ebx+4]
        fcomp dword ptr ds : [edx+4]
        sub ecx, 4
        fnstsw ax
        test ah, 0x41
        jne public_51ee09
        mov dword ptr ds : [esi], edx
        mov esi, ecx
        jmp public_51edf0
        public_51ee09 : nop
        mov ecx, dword ptr ss : [esp+0x10]
        mov dword ptr ds : [esi], ebx
        jmp public_51ee27
        public_51ee11 : nop
        cmp ebp, edi
        mov eax, edi
        je public_51ee24
        public_51ee17 : nop
        mov edx, dword ptr ds : [eax-4]
        sub eax, 4
        cmp eax, ebp
        mov dword ptr ds : [eax+4], edx
        jne public_51ee17
        public_51ee24 : nop
        mov dword ptr ss : [ebp], ebx
        public_51ee27 : nop
        add edi, 4
        cmp edi, ecx
        jne public_51edd8
        jmp public_51ef96
        public_51ee33 : nop
        cmp eax, 0x10
        mov ebx, ecx
        mov edi, ebp
        jle public_51eefa
        public_51ee40 : nop
        mov ecx, dword ptr ds : [edi]
        fld dword ptr ds : [ecx+4]
        mov esi, dword ptr ds : [ebx-4]
        mov eax, ebx
        sub eax, edi
        sar eax, 2
        cdq 
        sub eax, edx
        sar eax, 1
        mov edx, dword ptr ds : [edi+eax*4]
        fcomp dword ptr ds : [edx+4]
        fnstsw ax
        test ah, 0x41
        jne public_51ee7f
        fld dword ptr ds : [edx+4]
        fcomp dword ptr ds : [esi+4]
        fnstsw ax
        test ah, 0x41
        je public_51ee9f
        fld dword ptr ds : [ecx+4]
        fcomp dword ptr ds : [esi+4]
        fnstsw ax
        test ah, 0x41
        jne public_51ee8c
        mov eax, esi
        jmp public_51eea1
        public_51ee7f : nop
        fld dword ptr ds : [ecx+4]
        fcomp dword ptr ds : [esi+4]
        fnstsw ax
        test ah, 0x41
        jne public_51ee90
        public_51ee8c : nop
        mov eax, ecx
        jmp public_51eea1
        public_51ee90 : nop
        fld dword ptr ds : [edx+4]
        fcomp dword ptr ds : [esi+4]
        fnstsw ax
        test ah, 0x41
        mov eax, esi
        je public_51eea1
        public_51ee9f : nop
        mov eax, edx
        public_51eea1 : nop
        mov ecx, dword ptr ss : [esp+0x10]
        push ecx
        push eax
        push ebx
        push edi
        call public_51fd90
        mov esi, eax
        mov edx, ebx
        sub edx, esi
        sub eax, edi
        add esp, 0x10
        and edx, 0xFFFFFFFC
        and eax, 0xFFFFFFFC
        cmp edx, eax
        push 0
        jg public_51eed5
        mov ecx, dword ptr ss : [esp+0x14]
        push ecx
        push ebx
        push esi
        call public_51fc90
        mov ebx, esi
        jmp public_51eee3
        public_51eed5 : nop
        mov edx, dword ptr ss : [esp+0x14]
        push edx
        push esi
        push edi
        call public_51fc90
        mov edi, esi
        public_51eee3 : nop
        mov eax, ebx
        sub eax, edi
        and eax, 0xFFFFFFFC
        add esp, 0x10
        cmp eax, 0x40
        jg public_51ee40
        mov ecx, dword ptr ss : [esp+0x10]
        public_51eefa : nop
        lea esi, ss:[ebp+0x40]
        cmp ebp, esi
        je public_51ef61
        lea ebx, ss:[ebp+4]
        cmp ebx, esi
        je public_51ef61
        public_51ef08 : nop
        mov esi, dword ptr ds : [ebx]
        mov edx, dword ptr ss : [ebp]
        fld dword ptr ds : [esi+4]
        fcomp dword ptr ds : [edx+4]
        fnstsw ax
        test ah, 0x41
        je public_51ef41
        mov edi, ebx
        mov ecx, ebx
        mov edi, edi
        public_51ef20 : nop
        mov edx, dword ptr ds : [ecx-4]
        fld dword ptr ds : [esi+4]
        fcomp dword ptr ds : [edx+4]
        sub ecx, 4
        fnstsw ax
        test ah, 0x41
        jne public_51ef39
        mov dword ptr ds : [edi], edx
        mov edi, ecx
        jmp public_51ef20
        public_51ef39 : nop
        mov ecx, dword ptr ss : [esp+0x10]
        mov dword ptr ds : [edi], esi
        jmp public_51ef57
        public_51ef41 : nop
        cmp ebp, ebx
        mov eax, ebx
        je public_51ef54
        public_51ef47 : nop
        mov edx, dword ptr ds : [eax-4]
        sub eax, 4
        cmp eax, ebp
        mov dword ptr ds : [eax+4], edx
        jne public_51ef47
        public_51ef54 : nop
        mov dword ptr ss : [ebp], esi
        public_51ef57 : nop
        add ebx, 4
        lea esi, ss:[ebp+0x40]
        cmp ebx, esi
        jne public_51ef08
        public_51ef61 : nop
        cmp esi, ecx
        je public_51ef96
        public_51ef65 : nop
        mov ebx, dword ptr ds : [esi]
        mov edi, esi
        mov ecx, esi
        nop 
        lea esp, ss:[esp]
        public_51ef70 : nop
        mov edx, dword ptr ds : [ecx-4]
        fld dword ptr ds : [ebx+4]
        fcomp dword ptr ds : [edx+4]
        sub ecx, 4
        fnstsw ax
        test ah, 0x41
        jne public_51ef89
        mov dword ptr ds : [edi], edx
        mov edi, ecx
        jmp public_51ef70
        public_51ef89 : nop
        mov eax, dword ptr ss : [esp+0x10]
        add esi, 4
        cmp esi, eax
        mov dword ptr ds : [edi], ebx
        jne public_51ef65
        public_51ef96 : nop
        mov eax, dword ptr ss : [esp+0x14]
        add eax, 0x10
        cmp eax, offset public_675344
        mov dword ptr ss : [esp+0x14], eax
        jl public_51edb0
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 8
        ret 
        UNREACHABLE_TRAP(0x51eda0)
    }
}

#undef public_51edb0
#undef public_51edd8
#undef public_51edf0
#undef public_51ee09
#undef public_51ee11
#undef public_51ee17
#undef public_51ee24
#undef public_51ee27
#undef public_51ee33
#undef public_51ee40
#undef public_51ee7f
#undef public_51ee8c
#undef public_51ee90
#undef public_51ee9f
#undef public_51eea1
#undef public_51eed5
#undef public_51eee3
#undef public_51eefa
#undef public_51ef08
#undef public_51ef20
#undef public_51ef39
#undef public_51ef41
#undef public_51ef47
#undef public_51ef54
#undef public_51ef57
#undef public_51ef61
#undef public_51ef65
#undef public_51ef70
#undef public_51ef89
#undef public_51ef96
