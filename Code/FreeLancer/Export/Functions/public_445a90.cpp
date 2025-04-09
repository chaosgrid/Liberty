#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_41dde0);
CLANG_FORWARD_PROC_SYMBOL(public_43ad50);
CLANG_FORWARD_PROC_SYMBOL(public_59e6a0);

#define public_445ac0 _public_445ac0
#define public_445acc _public_445acc
#define public_445ad6 _public_445ad6
#define public_445af8 _public_445af8
#define public_445b01 _public_445b01
#define public_445b03 _public_445b03
#define public_445b4e _public_445b4e
#define public_445b69 _public_445b69
#define public_445b84 _public_445b84
#define public_445b9f _public_445b9f
#define public_445bba _public_445bba
#define public_445bbf _public_445bbf
#define public_445bc4 _public_445bc4
#define public_445bd1 _public_445bd1

PROC_DECLARE(0x445a90, internal_445a90, public_445a90);
extern "C" NAKED register_t __cdecl internal_445a90()
{
    __asm
    {
        push esi
        mov esi, ecx
        call public_59e6a0
        test al, al
        jne public_445bd1
        mov eax, dword ptr ds : [esi+0x300]
        cmp eax, 2
        push ebx
        push edi
        mov byte ptr ds : [esi+0x2F8], 1
        mov ebx, offset public_5cbbec
        jne public_445ac0
        mov ebx, offset public_5cbbd4
        jmp public_445ad6
        public_445ac0 : nop
        cmp eax, 3
        jne public_445acc
        mov ebx, offset public_5cbbc0
        jmp public_445ad6
        public_445acc : nop
        cmp eax, 4
        jne public_445ad6
        mov ebx, offset public_5cbbac
        public_445ad6 : nop
        mov edi, dword ptr ds : [esi+0x1B0]
        cmp edi, 0xFFFFFFFF
        je public_445bc4
        mov eax, dword ptr ds : [esi+8]
        mov eax, dword ptr ds : [eax+0x38]
        push eax
        mov ecx, offset public_668708
        call public_43ad50
        xor ecx, ecx
        public_445af8 : nop
        test ecx, ecx
        jne public_445b01
        mov ecx, dword ptr ds : [eax+4]
        jmp public_445b03
        public_445b01 : nop
        mov ecx, dword ptr ds : [ecx]
        public_445b03 : nop
        test ecx, ecx
        je public_445bc4
        mov edx, dword ptr ds : [ecx+8]
        cmp dword ptr ds : [edx], edi
        jne public_445af8
        test ecx, ecx
        je public_445bc4
        mov ecx, edx
        test ecx, ecx
        je public_445bc4
        mov al, byte ptr ds : [ecx+0xA]
        test al, al
        je public_445bbf
        mov eax, dword ptr ds : [ecx+0x220]
        test eax, eax
        jne public_445b4e
        push eax
        mov ebx, offset public_5cbbec
        push ebx
        call public_41dde0
        add esp, 8
        pop edi
        pop ebx
        pop esi
        ret 8
        public_445b4e : nop
        cmp eax, 1
        jne public_445b69
        mov ebx, offset public_5cbba0
        push 0
        push ebx
        call public_41dde0
        add esp, 8
        pop edi
        pop ebx
        pop esi
        ret 8
        public_445b69 : nop
        cmp eax, 2
        jne public_445b84
        mov ebx, offset public_5cbb94
        push 0
        push ebx
        call public_41dde0
        add esp, 8
        pop edi
        pop ebx
        pop esi
        ret 8
        public_445b84 : nop
        cmp eax, 3
        jne public_445b9f
        mov ebx, offset public_5cbb84
        push 0
        push ebx
        call public_41dde0
        add esp, 8
        pop edi
        pop ebx
        pop esi
        ret 8
        public_445b9f : nop
        cmp eax, 4
        jne public_445bba
        mov ebx, offset public_5cbb78
        push 0
        push ebx
        call public_41dde0
        add esp, 8
        pop edi
        pop ebx
        pop esi
        ret 8
        public_445bba : nop
        cmp eax, 5
        jne public_445bc4
        public_445bbf : nop
        mov ebx, offset public_5cbb6c
        public_445bc4 : nop
        push 0
        push ebx
        call public_41dde0
        add esp, 8
        pop edi
        pop ebx
        public_445bd1 : nop
        pop esi
        ret 8
        UNREACHABLE_TRAP(0x445a90)
    }
}

#undef public_445ac0
#undef public_445acc
#undef public_445ad6
#undef public_445af8
#undef public_445b01
#undef public_445b03
#undef public_445b4e
#undef public_445b69
#undef public_445b84
#undef public_445b9f
#undef public_445bba
#undef public_445bbf
#undef public_445bc4
#undef public_445bd1
