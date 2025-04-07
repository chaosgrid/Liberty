#include "FLServer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_40d250);
CLANG_FORWARD_PROC_SYMBOL(public_418ab6);
CLANG_FORWARD_PROC_SYMBOL(public_418c5a);
CLANG_FORWARD_PROC_SYMBOL(public_418d32);
CLANG_FORWARD_PROC_SYMBOL(public_418d38);
CLANG_FORWARD_PROC_SYMBOL(public_418d8c);

#define public_40d288 _public_40d288
#define public_40d2e6 _public_40d2e6
#define public_40d2e9 _public_40d2e9
#define public_40d2fb _public_40d2fb
#define public_40d30a _public_40d30a
#define public_40d312 _public_40d312
#define public_40d315 _public_40d315
#define public_40d31d _public_40d31d
#define public_40d320 _public_40d320
#define public_40d32a _public_40d32a
#define public_40d375 _public_40d375

PROC_DECLARE(0x40d250, internal_40d250, public_40d250);
extern "C" NAKED register_t __cdecl internal_40d250()
{
    __asm
    {
        push ecx
        push ebx
        push esi
        mov esi, ecx
        mov ecx, dword ptr ds : [esi+0x20]
        push edi
        call public_418d38
        mov edi, dword ptr ds : [esi+0xB90]
        mov ebx, eax
        cmp ebx, edi
        mov dword ptr ss : [esp+0xC], ebx
        jne public_40d288
        mov ecx, dword ptr ds : [esi+0x20]
        mov edx, dword ptr ds : [ecx+0x20]
        lea eax, ds:[esi+0xB80]
        push eax
        push edx
        call dword ptr ds : [public_41bc14]
        mov edi, dword ptr ds : [esi+0xB94]
        public_40d288 : nop
        mov eax, dword ptr ds : [ebx+0x20]
        push ebp
        mov ebp, dword ptr ds : [public_41bbbc]
        push 0xFFFFFFF4
        push eax
        call ebp
        mov ecx, dword ptr ds : [edi+0x20]
        push 0xFFFFFFF4
        push ecx
        mov ebx, eax
        call ebp
        mov edx, dword ptr ss : [esp+0x10]
        push eax
        mov eax, dword ptr ds : [edx+0x20]
        push 0xFFFFFFF4
        push eax
        call dword ptr ds : [public_41bbb8]
        mov ecx, dword ptr ds : [edi+0x20]
        push ebx
        push 0xFFFFFFF4
        push ecx
        call dword ptr ds : [public_41bbb8]
        mov ecx, dword ptr ss : [esp+0x10]
        push 0
        call public_418ab6
        push 5
        mov ecx, edi
        call public_418ab6
        cmp edi, dword ptr ds : [esi+0xB94]
        mov eax, dword ptr ds : [esi+0x20]
        jne public_40d30a
        test eax, eax
        jne public_40d2e6
        xor ecx, ecx
        jmp public_40d2e9
        public_40d2e6 : nop
        mov ecx, dword ptr ds : [eax+0x20]
        public_40d2e9 : nop
        test eax, eax
        jne public_40d2fb
        push 0xFFFFFFF0
        push ecx
        xor ebx, ebx
        call ebp
        and eax, 0xFFFBFFFF
        jmp public_40d32a
        public_40d2fb : nop
        mov ebx, dword ptr ds : [eax+0x20]
        push 0xFFFFFFF0
        push ecx
        call ebp
        and eax, 0xFFFBFFFF
        jmp public_40d32a
        public_40d30a : nop
        test eax, eax
        jne public_40d312
        xor ecx, ecx
        jmp public_40d315
        public_40d312 : nop
        mov ecx, dword ptr ds : [eax+0x20]
        public_40d315 : nop
        test eax, eax
        jne public_40d31d
        xor ebx, ebx
        jmp public_40d320
        public_40d31d : nop
        mov ebx, dword ptr ds : [eax+0x20]
        public_40d320 : nop
        push 0xFFFFFFF0
        push ecx
        call ebp
        or eax, 0x40000
        public_40d32a : nop
        push eax
        push 0xFFFFFFF0
        push ebx
        call dword ptr ds : [public_41bbb8]
        mov ecx, dword ptr ds : [esi+0x20]
        push 1
        push edi
        call public_418d8c
        mov ecx, dword ptr ds : [esi+0x20]
        mov edx, dword ptr ds : [ecx]
        push 1
        call dword ptr ds : [edx+0xD0]
        mov eax, dword ptr ds : [edi+0x20]
        push 1
        push 0
        push eax
        call dword ptr ds : [public_41bbb4]
        mov ecx, dword ptr ds : [esi+0xB94]
        cmp edi, ecx
        pop ebp
        jne public_40d375
        push 0
        call public_418d32
        mov eax, dword ptr ss : [esp+0xC]
        pop edi
        pop esi
        pop ebx
        pop ecx
        ret 
        public_40d375 : nop
        mov ecx, dword ptr ds : [esi+0xB8C]
        mov eax, dword ptr ds : [esi+0xB84]
        mov edx, dword ptr ds : [esi+0xB88]
        mov ebx, dword ptr ds : [esi+0xB80]
        push 6
        sub ecx, eax
        push ecx
        mov ecx, dword ptr ds : [esi+0x20]
        sub edx, ebx
        push edx
        push 0
        push 0
        push 0
        call public_418c5a
        mov eax, dword ptr ss : [esp+0xC]
        pop edi
        pop esi
        pop ebx
        pop ecx
        ret 
        UNREACHABLE_TRAP(0x40d250)
    }
}

#undef public_40d288
#undef public_40d2e6
#undef public_40d2e9
#undef public_40d2fb
#undef public_40d30a
#undef public_40d312
#undef public_40d315
#undef public_40d31d
#undef public_40d320
#undef public_40d32a
#undef public_40d375
