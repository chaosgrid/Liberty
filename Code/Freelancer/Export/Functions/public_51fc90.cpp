#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_51fc90);

#define public_51fcb0 _public_51fcb0
#define public_51fce6 _public_51fce6
#define public_51fcf3 _public_51fcf3
#define public_51fcf7 _public_51fcf7
#define public_51fd04 _public_51fd04
#define public_51fd06 _public_51fd06
#define public_51fd10 _public_51fd10
#define public_51fd24 _public_51fd24
#define public_51fd46 _public_51fd46
#define public_51fd6a _public_51fd6a
#define public_51fd78 _public_51fd78
#define public_51fd8d _public_51fd8d

PROC_DECLARE(0x51fc90, internal_51fc90, public_51fc90);
extern "C" NAKED register_t __cdecl internal_51fc90()
{
    __asm
    {
        push ebx
        mov ebx, dword ptr ss : [esp+8]
        push ebp
        mov ebp, dword ptr ss : [esp+0x10]
        mov eax, ebp
        sub eax, ebx
        sar eax, 2
        cmp eax, 0x10
        jle public_51fd8d
        push esi
        push edi
        lea esp, ss:[esp]
        public_51fcb0 : nop
        mov ecx, dword ptr ds : [ebx]
        fld dword ptr ds : [ecx+4]
        mov esi, dword ptr ss : [ebp-4]
        cdq 
        sub eax, edx
        sar eax, 1
        mov edx, dword ptr ds : [ebx+eax*4]
        fcomp dword ptr ds : [edx+4]
        fnstsw ax
        test ah, 0x41
        jne public_51fce6
        fld dword ptr ds : [edx+4]
        fcomp dword ptr ds : [esi+4]
        fnstsw ax
        test ah, 0x41
        je public_51fd06
        fld dword ptr ds : [ecx+4]
        fcomp dword ptr ds : [esi+4]
        fnstsw ax
        test ah, 0x41
        jne public_51fcf3
        jmp public_51fd04
        public_51fce6 : nop
        fld dword ptr ds : [ecx+4]
        fcomp dword ptr ds : [esi+4]
        fnstsw ax
        test ah, 0x41
        jne public_51fcf7
        public_51fcf3 : nop
        mov edx, ecx
        jmp public_51fd06
        public_51fcf7 : nop
        fld dword ptr ds : [edx+4]
        fcomp dword ptr ds : [esi+4]
        fnstsw ax
        test ah, 0x41
        jne public_51fd06
        public_51fd04 : nop
        mov edx, esi
        public_51fd06 : nop
        mov ecx, ebp
        mov esi, ebx
        lea ebx, ds:[ebx]
        public_51fd10 : nop
        mov edi, dword ptr ds : [esi]
        fld dword ptr ds : [edi+4]
        fcomp dword ptr ds : [edx+4]
        fnstsw ax
        test ah, 0x41
        jne public_51fd24
        add esi, 4
        jmp public_51fd10
        public_51fd24 : nop
        mov eax, dword ptr ds : [ecx-4]
        fld dword ptr ds : [edx+4]
        fcomp dword ptr ds : [eax+4]
        sub ecx, 4
        fnstsw ax
        test ah, 0x41
        je public_51fd24
        cmp ecx, esi
        jbe public_51fd46
        mov eax, dword ptr ds : [ecx]
        mov dword ptr ds : [esi], eax
        mov dword ptr ds : [ecx], edi
        add esi, 4
        jmp public_51fd10
        public_51fd46 : nop
        mov ecx, ebp
        mov edx, esi
        sub ecx, esi
        sub edx, ebx
        and ecx, 0xFFFFFFFC
        and edx, 0xFFFFFFFC
        cmp ecx, edx
        push 0
        jg public_51fd6a
        mov eax, dword ptr ss : [esp+0x20]
        push eax
        push ebp
        push esi
        call public_51fc90
        mov ebp, esi
        jmp public_51fd78
        public_51fd6a : nop
        mov ecx, dword ptr ss : [esp+0x20]
        push ecx
        push esi
        push ebx
        call public_51fc90
        mov ebx, esi
        public_51fd78 : nop
        mov eax, ebp
        sub eax, ebx
        sar eax, 2
        add esp, 0x10
        cmp eax, 0x10
        jg public_51fcb0
        pop edi
        pop esi
        public_51fd8d : nop
        pop ebp
        pop ebx
        ret 
        UNREACHABLE_TRAP(0x51fc90)
    }
}

#undef public_51fcb0
#undef public_51fce6
#undef public_51fcf3
#undef public_51fcf7
#undef public_51fd04
#undef public_51fd06
#undef public_51fd10
#undef public_51fd24
#undef public_51fd46
#undef public_51fd6a
#undef public_51fd78
#undef public_51fd8d
