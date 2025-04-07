#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_424870);

#define public_4248b4 _public_4248b4
#define public_4248be _public_4248be
#define public_424906 _public_424906
#define public_42499d _public_42499d

PROC_DECLARE(0x424870, internal_424870, public_424870);
extern "C" NAKED register_t __cdecl internal_424870()
{
    __asm
    {
        mov al, byte ptr ss : [esp+8]
        sub esp, 0x10
        test al, al
        push ebx
        push ebp
        mov ebp, dword ptr ss : [esp+0x24]
        push esi
        push edi
        mov edi, dword ptr ss : [esp+0x30]
        mov dword ptr ds : [public_610850], ebp
        mov dword ptr ds : [public_610854], edi
        mov byte ptr ds : [public_6679f0], al
        je public_424906
        lea eax, ss:[esp+0x10]
        push eax
        call dword ptr ds : [public_5c72e4]
        push eax
        call dword ptr ds : [public_5c7288]
        mov eax, dword ptr ss : [esp+0x18]
        cmp ebp, eax
        jae public_4248b4
        mov ebp, eax
        public_4248b4 : nop
        mov eax, dword ptr ss : [esp+0x1C]
        cmp edi, eax
        jae public_4248be
        mov edi, eax
        public_4248be : nop
        mov esi, dword ptr ss : [esp+0x24]
        push 0x80000000
        push 0xFFFFFFF0
        push esi
        call dword ptr ds : [public_616434]
        mov ebx, dword ptr ds : [public_5c728c]
        push 0x27
        push 0
        push 0
        push 0
        push 0
        push 0
        push esi
        call ebx
        push 0x100
        push edi
        push ebp
        push 0
        push 0
        push 0xFFFFFFFF
        push esi
        call ebx
        push 1
        push esi
        call dword ptr ds : [public_5c7290]
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 0x10
        ret 
        public_424906 : nop
        mov esi, dword ptr ss : [esp+0x24]
        push 0x2CA0000
        push 0xFFFFFFF0
        push esi
        call dword ptr ds : [public_616434]
        mov ebx, dword ptr ds : [public_5c728c]
        push 0x27
        push 0
        push 0
        push 0
        push 0
        push 0
        push esi
        call ebx
        xor eax, eax
        push 0xFFFFFFEC
        mov dword ptr ss : [esp+0x20], edi
        mov edi, dword ptr ds : [public_61642c]
        push esi
        mov dword ptr ss : [esp+0x18], eax
        mov dword ptr ss : [esp+0x1C], eax
        mov dword ptr ss : [esp+0x20], ebp
        call edi
        push eax
        push esi
        call dword ptr ds : [public_5c7294]
        neg eax
        sbb eax, eax
        neg eax
        push eax
        push 0xFFFFFFF0
        push esi
        call edi
        push eax
        lea ecx, ss:[esp+0x1C]
        push ecx
        call dword ptr ds : [public_5c7298]
        mov edx, dword ptr ss : [esp+0x1C]
        mov ebp, dword ptr ss : [esp+0x14]
        mov eax, dword ptr ss : [esp+0x18]
        push 0x102
        sub edx, ebp
        push edx
        sub eax, dword ptr ss : [esp+0x18]
        push eax
        push 0
        push 0
        push 0xFFFFFFFE
        push esi
        call ebx
        mov cl, byte ptr ds : [public_6679f9]
        test cl, cl
        mov eax, 1
        je public_42499d
        xor eax, eax
        public_42499d : nop
        push eax
        push esi
        call dword ptr ds : [public_5c7290]
        push 1
        push 0
        push 0
        call dword ptr ds : [public_5c729c]
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 0x10
        ret 
        UNREACHABLE_TRAP(0x424870)
    }
}

#undef public_4248b4
#undef public_4248be
#undef public_424906
#undef public_42499d
