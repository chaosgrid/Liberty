#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_537260);
CLANG_FORWARD_PROC_SYMBOL(public_53aaa0);
CLANG_FORWARD_PROC_SYMBOL(public_5999b0);
CLANG_FORWARD_PROC_SYMBOL(public_5aca40);
CLANG_FORWARD_PROC_SYMBOL(public_5ad970);
CLANG_FORWARD_PROC_SYMBOL(public_5afea0);
CLANG_FORWARD_PROC_SYMBOL(public_5affc0);
CLANG_FORWARD_PROC_SYMBOL(public_5b0060);
CLANG_FORWARD_PROC_SYMBOL(public_5b00d0);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e1d);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e84);

#define public_5aca60 _public_5aca60
#define public_5aca6e _public_5aca6e
#define public_5aca8f _public_5aca8f
#define public_5acab0 _public_5acab0
#define public_5acabb _public_5acabb
#define public_5acac3 _public_5acac3
#define public_5acacf _public_5acacf
#define public_5acaf0 _public_5acaf0
#define public_5acb04 _public_5acb04
#define public_5acb41 _public_5acb41
#define public_5acb50 _public_5acb50
#define public_5acb6f _public_5acb6f
#define public_5acb81 _public_5acb81
#define public_5acb92 _public_5acb92
#define public_5acbd0 _public_5acbd0
#define public_5acc1c _public_5acc1c
#define public_5acc25 _public_5acc25
#define public_5acc56 _public_5acc56
#define public_5acc70 _public_5acc70
#define public_5acc8c _public_5acc8c
#define public_5acca6 _public_5acca6

PROC_DECLARE(0x5aca40, internal_5aca40, public_5aca40);
extern "C" NAKED register_t __cdecl internal_5aca40()
{
    __asm
    {
        sub esp, 8
        push ebx
        push ebp
        push esi
        mov esi, dword ptr ss : [esp+0x18]
        mov ebx, ecx
        mov ecx, dword ptr ds : [esi+8]
        mov eax, ecx
        cmp eax, ecx
        push edi
        mov edi, dword ptr ds : [esi+4]
        mov dword ptr ss : [esp+0x14], ebx
        je public_5aca6e
        lea ecx, ds:[ecx]
        public_5aca60 : nop
        mov edx, dword ptr ds : [eax]
        mov dword ptr ds : [edi], edx
        add eax, 4
        add edi, 4
        cmp eax, ecx
        jne public_5aca60
        public_5aca6e : nop
        mov eax, dword ptr ds : [esi+8]
        push eax
        push edi
        mov ecx, esi
        call public_53aaa0
        mov dword ptr ds : [esi+8], edi
        mov eax, dword ptr ds : [ebx+0x144]
        test eax, eax
        jne public_5aca8f
        xor ecx, ecx
        mov dword ptr ss : [esp+0x1C], ecx
        jmp public_5acab0
        public_5aca8f : nop
        mov ecx, dword ptr ds : [ebx+0x148]
        sub ecx, eax
        mov eax, 0xD20D20D3
        imul ecx
        add edx, ecx
        sar edx, 7
        mov ecx, edx
        shr ecx, 0x1F
        add edx, ecx
        mov dword ptr ss : [esp+0x1C], edx
        mov ecx, edx
        public_5acab0 : nop
        mov edx, dword ptr ds : [esi+4]
        test edx, edx
        jne public_5acabb
        xor eax, eax
        jmp public_5acac3
        public_5acabb : nop
        mov eax, dword ptr ds : [esi+0xC]
        sub eax, edx
        sar eax, 2
        public_5acac3 : nop
        cmp eax, ecx
        jae public_5acb41
        test ecx, ecx
        mov eax, ecx
        jge public_5acacf
        xor eax, eax
        public_5acacf : nop
        lea edx, ds:[eax*4]
        push edx
        call public_5b7e84
        mov ebp, dword ptr ds : [esi+8]
        mov edi, dword ptr ds : [esi+4]
        add esp, 4
        cmp edi, ebp
        mov dword ptr ss : [esp+0x10], eax
        mov ebx, eax
        je public_5acb04
        nop 
        public_5acaf0 : nop
        push edi
        push ebx
        call public_5999b0
        add edi, 4
        add esp, 8
        add ebx, 4
        cmp edi, ebp
        jne public_5acaf0
        public_5acb04 : nop
        mov eax, dword ptr ds : [esi+8]
        mov ecx, dword ptr ds : [esi+4]
        push eax
        push ecx
        mov ecx, esi
        call public_53aaa0
        mov edx, dword ptr ds : [esi+4]
        push edx
        call public_5b7e1d
        mov eax, dword ptr ss : [esp+0x20]
        mov edi, dword ptr ss : [esp+0x14]
        lea ecx, ds:[edi+eax*4]
        mov dword ptr ds : [esi+0xC], ecx
        add esp, 4
        mov ecx, esi
        call public_5ad970
        mov ecx, dword ptr ss : [esp+0x1C]
        lea edx, ds:[edi+eax*4]
        mov dword ptr ds : [esi+8], edx
        mov dword ptr ds : [esi+4], edi
        public_5acb41 : nop
        test ecx, ecx
        jle public_5acb92
        mov ebx, dword ptr ss : [esp+0x24]
        xor edi, edi
        mov dword ptr ss : [esp+0x1C], ecx
        nop 
        public_5acb50 : nop
        mov eax, dword ptr ss : [esp+0x14]
        mov eax, dword ptr ds : [eax+0x144]
        add eax, edi
        test ebx, ebx
        mov dword ptr ss : [esp+0x24], eax
        je public_5acb6f
        mov edx, dword ptr ds : [ebx]
        push eax
        mov ecx, ebx
        call dword ptr ds : [edx]
        test al, al
        je public_5acb81
        public_5acb6f : nop
        mov ecx, dword ptr ds : [esi+8]
        lea eax, ss:[esp+0x24]
        push eax
        push 1
        push ecx
        mov ecx, esi
        call public_537260
        public_5acb81 : nop
        mov eax, dword ptr ss : [esp+0x1C]
        add edi, 0x9C
        dec eax
        mov dword ptr ss : [esp+0x1C], eax
        jne public_5acb50
        public_5acb92 : nop
        mov ebx, dword ptr ss : [esp+0x20]
        test ebx, ebx
        je public_5acca6
        mov edi, dword ptr ds : [esi+8]
        mov esi, dword ptr ds : [esi+4]
        mov eax, edi
        sub eax, esi
        sar eax, 2
        cmp eax, 0x10
        mov dword ptr ss : [esp+0x20], edi
        mov dword ptr ss : [esp+0x1C], esi
        jg public_5acbd0
        push 0
        push ebx
        push edi
        push esi
        call public_5affc0
        add esp, 0x10
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 8
        ret 0xC
        nop 
        public_5acbd0 : nop
        mov edx, dword ptr ds : [edi-4]
        mov ecx, dword ptr ds : [esi]
        push ebx
        mov eax, edi
        sub eax, esi
        sar eax, 2
        push ebx
        push edx
        cdq 
        sub eax, edx
        sar eax, 1
        mov eax, dword ptr ds : [esi+eax*4]
        push eax
        push ecx
        call public_5b0060
        add esp, 0x10
        push eax
        push edi
        push esi
        call public_5b00d0
        mov ebp, eax
        mov edx, edi
        add esp, 0x10
        sub edx, ebp
        sub eax, esi
        and edx, 0xFFFFFFFC
        and eax, 0xFFFFFFFC
        cmp edx, eax
        push 0
        push ebx
        jg public_5acc1c
        push edi
        push ebp
        call public_5afea0
        mov edi, ebp
        jmp public_5acc25
        public_5acc1c : nop
        push ebp
        push esi
        call public_5afea0
        mov esi, ebp
        public_5acc25 : nop
        mov ecx, edi
        sub ecx, esi
        and ecx, 0xFFFFFFFC
        add esp, 0x10
        cmp ecx, 0x40
        jg public_5acbd0
        mov esi, dword ptr ss : [esp+0x1C]
        mov edi, dword ptr ss : [esp+0x20]
        push 0
        push ebx
        lea ebp, ds:[esi+0x40]
        push ebp
        push esi
        call public_5affc0
        mov esi, ebp
        add esp, 0x10
        cmp esi, edi
        mov dword ptr ss : [esp+0x1C], esi
        je public_5acca6
        public_5acc56 : nop
        mov eax, dword ptr ds : [esi]
        mov edx, dword ptr ds : [esi-4]
        mov ebp, esi
        add esi, 0xFFFFFFFC
        push edx
        push eax
        mov dword ptr ss : [esp+0x2C], eax
        call ebx
        add esp, 8
        test al, al
        je public_5acc8c
        nop 
        public_5acc70 : nop
        mov eax, dword ptr ds : [esi]
        mov edx, dword ptr ss : [esp+0x24]
        mov dword ptr ss : [ebp], eax
        mov ecx, dword ptr ds : [esi-4]
        mov ebp, esi
        sub esi, 4
        push ecx
        push edx
        call ebx
        add esp, 8
        test al, al
        jne public_5acc70
        public_5acc8c : nop
        mov eax, dword ptr ss : [esp+0x24]
        mov esi, dword ptr ss : [esp+0x1C]
        mov dword ptr ss : [ebp], eax
        mov eax, dword ptr ss : [esp+0x20]
        add esi, 4
        cmp esi, eax
        mov dword ptr ss : [esp+0x1C], esi
        jne public_5acc56
        public_5acca6 : nop
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 8
        ret 0xC
        UNREACHABLE_TRAP(0x5aca40)
    }
}

#undef public_5aca60
#undef public_5aca6e
#undef public_5aca8f
#undef public_5acab0
#undef public_5acabb
#undef public_5acac3
#undef public_5acacf
#undef public_5acaf0
#undef public_5acb04
#undef public_5acb41
#undef public_5acb50
#undef public_5acb6f
#undef public_5acb81
#undef public_5acb92
#undef public_5acbd0
#undef public_5acc1c
#undef public_5acc25
#undef public_5acc56
#undef public_5acc70
#undef public_5acc8c
#undef public_5acca6
