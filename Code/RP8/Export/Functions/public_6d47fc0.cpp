#include "RP8-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d47f43);
CLANG_FORWARD_PROC_SYMBOL(public_6d47f82);
CLANG_FORWARD_PROC_SYMBOL(public_6d47fc0);
CLANG_FORWARD_PROC_SYMBOL(public_6d49931);
CLANG_FORWARD_PROC_SYMBOL(public_6d57ca5);
CLANG_FORWARD_PROC_SYMBOL(public_6d58501);
CLANG_FORWARD_PROC_SYMBOL(public_6d5861a);

#define public_6d47ff4 _public_6d47ff4
#define public_6d48006 _public_6d48006
#define public_6d48012 _public_6d48012
#define public_6d4802c _public_6d4802c
#define public_6d48045 _public_6d48045
#define public_6d48083 _public_6d48083
#define public_6d4808f _public_6d4808f
#define public_6d4809a _public_6d4809a
#define public_6d4809e _public_6d4809e
#define public_6d480a0 _public_6d480a0
#define public_6d480a1 _public_6d480a1

PROC_DECLARE(0x6d47fc0, internal_6d47fc0, public_6d47fc0);
extern "C" NAKED register_t __cdecl internal_6d47fc0()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+0xC]
        push ebx
        push esi
        push edi
        xor edi, edi
        cmp eax, edi
        je public_6d4809e
        cmp byte ptr ds : [eax], 0x31
        jne public_6d4809e
        cmp dword ptr ss : [esp+0x1C], 0x38
        jne public_6d4809e
        mov esi, dword ptr ss : [esp+0x10]
        cmp esi, edi
        jne public_6d47ff4
        push 0xFFFFFFFE
        jmp public_6d480a0
        public_6d47ff4 : nop
        cmp dword ptr ds : [esi+0x20], edi
        mov dword ptr ds : [esi+0x18], edi
        jne public_6d48006
        mov dword ptr ds : [esi+0x20], offset _public_6d5861a
        mov dword ptr ds : [esi+0x28], edi
        public_6d48006 : nop
        cmp dword ptr ds : [esi+0x24], edi
        jne public_6d48012
        mov dword ptr ds : [esi+0x24], offset _public_6d49931
        public_6d48012 : nop
        xor ebx, ebx
        push 0x18
        inc ebx
        push ebx
        push dword ptr ds : [esi+0x28]
        call dword ptr ds : [esi+0x20]
        add esp, 0xC
        cmp eax, edi
        mov dword ptr ds : [esi+0x1C], eax
        jne public_6d4802c
        push 0xFFFFFFFC
        jmp public_6d480a0
        public_6d4802c : nop
        mov ecx, dword ptr ss : [esp+0x14]
        cmp ecx, edi
        mov dword ptr ds : [eax+0x14], edi
        mov eax, dword ptr ds : [esi+0x1C]
        mov dword ptr ds : [eax+0xC], edi
        jge public_6d48045
        mov eax, dword ptr ds : [esi+0x1C]
        neg ecx
        mov dword ptr ds : [eax+0xC], ebx
        public_6d48045 : nop
        cmp ecx, 8
        jl public_6d4809a
        cmp ecx, 0xF
        jg public_6d4809a
        mov eax, dword ptr ds : [esi+0x1C]
        mov dword ptr ds : [eax+0x10], ecx
        mov eax, dword ptr ds : [esi+0x1C]
        mov eax, dword ptr ds : [eax+0xC]
        shl ebx, cl
        neg eax
        sbb eax, eax
        not eax
        push ebx
        and eax, offset _public_6d58501
        push eax
        push esi
        call public_6d57ca5
        mov ecx, dword ptr ds : [esi+0x1C]
        mov dword ptr ds : [ecx+0x14], eax
        mov eax, dword ptr ds : [esi+0x1C]
        add esp, 0xC
        cmp dword ptr ds : [eax+0x14], edi
        jne public_6d4808f
        push 0xFFFFFFFC
        public_6d48083 : nop
        pop edi
        push esi
        call public_6d47f82
        pop ecx
        mov eax, edi
        jmp public_6d480a1
        public_6d4808f : nop
        push esi
        call public_6d47f43
        pop ecx
        xor eax, eax
        jmp public_6d480a1
        public_6d4809a : nop
        push 0xFFFFFFFE
        jmp public_6d48083
        public_6d4809e : nop
        push 0xFFFFFFFA
        public_6d480a0 : nop
        pop eax
        public_6d480a1 : nop
        pop edi
        pop esi
        pop ebx
        ret 
        UNREACHABLE_TRAP(0x6d47fc0)
    }
}

#undef public_6d47ff4
#undef public_6d48006
#undef public_6d48012
#undef public_6d4802c
#undef public_6d48045
#undef public_6d48083
#undef public_6d4808f
#undef public_6d4809a
#undef public_6d4809e
#undef public_6d480a0
#undef public_6d480a1
