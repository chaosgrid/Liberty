#include "RP8-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d317dd);
CLANG_FORWARD_PROC_SYMBOL(public_6d46501);
CLANG_FORWARD_PROC_SYMBOL(public_6d465fd);
CLANG_FORWARD_PROC_SYMBOL(public_6d4668b);
CLANG_FORWARD_PROC_SYMBOL(public_6d4671d);
CLANG_FORWARD_PROC_SYMBOL(public_6d467bb);
CLANG_FORWARD_PROC_SYMBOL(public_6d4681c);
CLANG_FORWARD_PROC_SYMBOL(public_6d4687d);
CLANG_FORWARD_PROC_SYMBOL(public_6d46b0f);
CLANG_FORWARD_PROC_SYMBOL(public_6d46c2d);
CLANG_FORWARD_PROC_SYMBOL(public_6d46d50);
CLANG_FORWARD_PROC_SYMBOL(public_6d46e31);
CLANG_FORWARD_PROC_SYMBOL(public_6d46e61);
CLANG_FORWARD_PROC_SYMBOL(public_6d49926);
CLANG_FORWARD_PROC_SYMBOL(public_6d49955);

#define public_6d46ea1 _public_6d46ea1
#define public_6d46ef6 _public_6d46ef6
#define public_6d46f11 _public_6d46f11

PROC_DECLARE(0x6d46e61, internal_6d46e61, public_6d46e61);
extern "C" NAKED register_t __cdecl internal_6d46e61()
{
    __asm
    {
        push ebx
        push esi
        mov esi, dword ptr ss : [esp+0xC]
        push edi
        xor ebx, ebx
        push esi
        mov dword ptr ds : [esi+4], ebx
        call public_6d49955
        push 0x50
        push esi
        mov edi, eax
        call public_6d49926
        add esp, 0xC
        cmp eax, ebx
        jne public_6d46ea1
        push esi
        call public_6d317dd
        mov eax, dword ptr ds : [esi]
        mov dword ptr ds : [eax+0x14], 0x35
        mov eax, dword ptr ds : [esi]
        mov dword ptr ds : [eax+0x18], ebx
        mov eax, dword ptr ds : [esi]
        push esi
        call dword ptr ds : [eax]
        pop ecx
        pop ecx
        jmp public_6d46f11
        public_6d46ea1 : nop
        push 2
        mov dword ptr ds : [eax], offset _public_6d46501
        mov dword ptr ds : [eax+4], offset _public_6d465fd
        mov dword ptr ds : [eax+8], offset _public_6d4668b
        mov dword ptr ds : [eax+0xC], offset _public_6d4671d
        mov dword ptr ds : [eax+0x10], offset _public_6d467bb
        mov dword ptr ds : [eax+0x14], offset _public_6d4681c
        mov dword ptr ds : [eax+0x18], offset _public_6d4687d
        mov dword ptr ds : [eax+0x1C], offset _public_6d46b0f
        mov dword ptr ds : [eax+0x20], offset _public_6d46c2d
        mov dword ptr ds : [eax+0x24], offset _public_6d46d50
        mov dword ptr ds : [eax+0x28], offset _public_6d46e31
        mov dword ptr ds : [eax+0x2C], edi
        lea ecx, ds:[eax+0x3C]
        pop edx
        public_6d46ef6 : nop
        mov dword ptr ds : [ecx-8], ebx
        mov dword ptr ds : [ecx], ebx
        sub ecx, 4
        dec edx
        jne public_6d46ef6
        mov dword ptr ds : [eax+0x40], ebx
        mov dword ptr ds : [eax+0x44], ebx
        mov dword ptr ds : [eax+0x48], 0x50
        mov dword ptr ds : [esi+4], eax
        public_6d46f11 : nop
        pop edi
        pop esi
        pop ebx
        ret 
        UNREACHABLE_TRAP(0x6d46e61)
    }
}

#undef public_6d46ea1
#undef public_6d46ef6
#undef public_6d46f11
