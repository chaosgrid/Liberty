#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_5afea0);

#define public_5afec0 _public_5afec0
#define public_5afef7 _public_5afef7
#define public_5aff05 _public_5aff05
#define public_5aff14 _public_5aff14
#define public_5aff18 _public_5aff18
#define public_5aff20 _public_5aff20
#define public_5aff31 _public_5aff31
#define public_5aff46 _public_5aff46
#define public_5aff6c _public_5aff6c
#define public_5aff98 _public_5aff98
#define public_5affa5 _public_5affa5
#define public_5affbb _public_5affbb

PROC_DECLARE(0x5afea0, internal_5afea0, public_5afea0);
extern "C" NAKED register_t __cdecl internal_5afea0()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+8]
        push ebp
        mov ebp, dword ptr ss : [esp+8]
        sub eax, ebp
        sar eax, 2
        cmp eax, 0x10
        jle public_5affbb
        push ebx
        push esi
        push edi
        mov edi, dword ptr ss : [esp+0x1C]
        mov edi, edi
        public_5afec0 : nop
        mov ebx, dword ptr ss : [ebp]
        cdq 
        sub eax, edx
        sar eax, 1
        mov ebp, dword ptr ss : [ebp+eax*4]
        mov eax, dword ptr ss : [esp+0x18]
        mov esi, dword ptr ds : [eax-4]
        push ebp
        push ebx
        mov dword ptr ss : [esp+0x24], ebp
        call edi
        add esp, 8
        test al, al
        push esi
        je public_5afef7
        mov ecx, ebp
        push ecx
        call edi
        add esp, 8
        test al, al
        je public_5aff05
        mov edx, ebp
        mov dword ptr ss : [esp+0x1C], edx
        jmp public_5aff18
        public_5afef7 : nop
        push ebx
        call edi
        add esp, 8
        test al, al
        jne public_5aff14
        mov ebx, dword ptr ss : [esp+0x1C]
        public_5aff05 : nop
        push esi
        push ebx
        call edi
        add esp, 8
        test al, al
        mov dword ptr ss : [esp+0x1C], esi
        jne public_5aff18
        public_5aff14 : nop
        mov dword ptr ss : [esp+0x1C], ebx
        public_5aff18 : nop
        mov ebx, dword ptr ss : [esp+0x18]
        mov esi, dword ptr ss : [esp+0x14]
        public_5aff20 : nop
        mov eax, dword ptr ss : [esp+0x1C]
        mov ecx, dword ptr ds : [esi]
        push eax
        push ecx
        call edi
        add esp, 8
        test al, al
        je public_5aff46
        public_5aff31 : nop
        mov edx, dword ptr ss : [esp+0x1C]
        mov eax, dword ptr ds : [esi+4]
        add esi, 4
        push edx
        push eax
        call edi
        add esp, 8
        test al, al
        jne public_5aff31
        public_5aff46 : nop
        mov ecx, dword ptr ds : [ebx-4]
        mov edx, dword ptr ss : [esp+0x1C]
        sub ebx, 4
        push ecx
        push edx
        call edi
        add esp, 8
        test al, al
        jne public_5aff46
        cmp ebx, esi
        jbe public_5aff6c
        mov eax, dword ptr ds : [esi]
        mov ecx, dword ptr ds : [ebx]
        mov dword ptr ds : [esi], ecx
        mov dword ptr ds : [ebx], eax
        add esi, 4
        jmp public_5aff20
        public_5aff6c : nop
        mov ebx, dword ptr ss : [esp+0x18]
        mov ebp, dword ptr ss : [esp+0x14]
        mov edx, ebx
        mov eax, esi
        sub edx, esi
        sub eax, ebp
        and edx, 0xFFFFFFFC
        and eax, 0xFFFFFFFC
        cmp edx, eax
        push 0
        push edi
        jg public_5aff98
        push ebx
        push esi
        call public_5afea0
        mov dword ptr ss : [esp+0x28], esi
        mov ebx, esi
        jmp public_5affa5
        public_5aff98 : nop
        push esi
        push ebp
        call public_5afea0
        mov ebp, esi
        mov dword ptr ss : [esp+0x24], ebp
        public_5affa5 : nop
        mov eax, ebx
        sub eax, ebp
        sar eax, 2
        add esp, 0x10
        cmp eax, 0x10
        jg public_5afec0
        pop edi
        pop esi
        pop ebx
        public_5affbb : nop
        pop ebp
        ret 
        UNREACHABLE_TRAP(0x5afea0)
    }
}

#undef public_5afec0
#undef public_5afef7
#undef public_5aff05
#undef public_5aff14
#undef public_5aff18
#undef public_5aff20
#undef public_5aff31
#undef public_5aff46
#undef public_5aff6c
#undef public_5aff98
#undef public_5affa5
#undef public_5affbb
