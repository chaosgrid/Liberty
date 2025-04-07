#include "RP8-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d4e7ce);
CLANG_FORWARD_PROC_SYMBOL(public_6d4e899);

#define public_6d4e8e7 _public_6d4e8e7
#define public_6d4e8f3 _public_6d4e8f3
#define public_6d4e924 _public_6d4e924
#define public_6d4e94d _public_6d4e94d
#define public_6d4e95e _public_6d4e95e
#define public_6d4e968 _public_6d4e968
#define public_6d4e981 _public_6d4e981
#define public_6d4e984 _public_6d4e984
#define public_6d4e999 _public_6d4e999
#define public_6d4e9b9 _public_6d4e9b9

PROC_DECLARE(0x6d4e899, internal_6d4e899, public_6d4e899);
extern "C" NAKED register_t __cdecl internal_6d4e899()
{
    __asm
    {
        push ebp
        mov ebp, esp
        sub esp, 0x34
        push ebx
        push edi
        mov edi, dword ptr ds : [esi+0x1A4]
        mov dword ptr ss : [ebp-0x28], edi
        add edi, 0x20
        push edi
        push esi
        call public_6d4e7ce
        cmp dword ptr ds : [esi+0x64], 3
        pop ecx
        pop ecx
        push 1
        mov ebx, eax
        mov eax, dword ptr ds : [esi]
        push esi
        jne public_6d4e8e7
        add eax, 0x18
        mov dword ptr ds : [eax], ebx
        mov ecx, dword ptr ds : [edi]
        mov dword ptr ds : [eax+4], ecx
        mov ecx, dword ptr ss : [ebp-0x28]
        mov edx, dword ptr ds : [ecx+0x24]
        mov dword ptr ds : [eax+8], edx
        mov ecx, dword ptr ds : [ecx+0x28]
        mov dword ptr ds : [eax+0xC], ecx
        mov eax, dword ptr ds : [esi]
        mov dword ptr ds : [eax+0x14], 0x5D
        jmp public_6d4e8f3
        public_6d4e8e7 : nop
        mov dword ptr ds : [eax+0x14], 0x5E
        mov eax, dword ptr ds : [esi]
        mov dword ptr ds : [eax+0x18], ebx
        public_6d4e8f3 : nop
        mov eax, dword ptr ds : [esi]
        call dword ptr ds : [eax+4]
        mov eax, dword ptr ds : [esi+4]
        pop ecx
        pop ecx
        push dword ptr ds : [esi+0x64]
        push ebx
        push 1
        push esi
        call dword ptr ds : [eax+8]
        and dword ptr ss : [ebp-0x20], 0
        add esp, 0x10
        cmp dword ptr ds : [esi+0x64], 0
        mov dword ptr ss : [ebp-0x34], eax
        mov dword ptr ss : [ebp-0x14], ebx
        jle public_6d4e9b9
        mov dword ptr ss : [ebp-0x1C], eax
        mov dword ptr ss : [ebp-0x18], edi
        public_6d4e924 : nop
        mov eax, dword ptr ss : [ebp-0x18]
        mov ecx, dword ptr ds : [eax]
        mov eax, dword ptr ss : [ebp-0x14]
        cdq 
        idiv ecx
        xor edi, edi
        cmp ecx, edi
        mov dword ptr ss : [ebp-8], eax
        jle public_6d4e999
        lea eax, ds:[ecx-1]
        mov dword ptr ss : [ebp-0x2C], eax
        cdq 
        sub eax, edx
        mov dword ptr ss : [ebp-0xC], eax
        sar dword ptr ss : [ebp-0xC], 1
        mov dword ptr ss : [ebp-0x10], edi
        mov dword ptr ss : [ebp-0x24], ecx
        public_6d4e94d : nop
        mov eax, dword ptr ss : [ebp-0xC]
        add eax, edi
        cdq 
        idiv dword ptr ss : [ebp-0x2C]
        mov edx, dword ptr ss : [ebp-0x10]
        mov dword ptr ss : [ebp-0x30], eax
        jmp public_6d4e984
        public_6d4e95e : nop
        and dword ptr ss : [ebp-4], 0
        cmp dword ptr ss : [ebp-8], 0
        jle public_6d4e981
        public_6d4e968 : nop
        mov eax, dword ptr ss : [ebp-0x1C]
        mov eax, dword ptr ds : [eax]
        add eax, dword ptr ss : [ebp-4]
        mov cl, byte ptr ss : [ebp-0x30]
        inc dword ptr ss : [ebp-4]
        mov byte ptr ds : [eax+edx], cl
        mov eax, dword ptr ss : [ebp-4]
        cmp eax, dword ptr ss : [ebp-8]
        jl public_6d4e968
        public_6d4e981 : nop
        add edx, dword ptr ss : [ebp-0x14]
        public_6d4e984 : nop
        cmp edx, ebx
        jl public_6d4e95e
        mov eax, dword ptr ss : [ebp-8]
        add dword ptr ss : [ebp-0x10], eax
        add edi, 0xFF
        dec dword ptr ss : [ebp-0x24]
        jne public_6d4e94d
        public_6d4e999 : nop
        mov eax, dword ptr ss : [ebp-8]
        inc dword ptr ss : [ebp-0x20]
        add dword ptr ss : [ebp-0x18], 4
        add dword ptr ss : [ebp-0x1C], 4
        mov dword ptr ss : [ebp-0x14], eax
        mov eax, dword ptr ss : [ebp-0x20]
        cmp eax, dword ptr ds : [esi+0x64]
        jl public_6d4e924
        mov eax, dword ptr ss : [ebp-0x34]
        public_6d4e9b9 : nop
        mov ecx, dword ptr ss : [ebp-0x28]
        pop edi
        mov dword ptr ds : [ecx+0x14], ebx
        mov dword ptr ds : [ecx+0x10], eax
        pop ebx
        leave 
        ret 
        UNREACHABLE_TRAP(0x6d4e899)
    }
}

#undef public_6d4e8e7
#undef public_6d4e8f3
#undef public_6d4e924
#undef public_6d4e94d
#undef public_6d4e95e
#undef public_6d4e968
#undef public_6d4e981
#undef public_6d4e984
#undef public_6d4e999
#undef public_6d4e9b9
