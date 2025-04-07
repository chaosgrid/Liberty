#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_46c8c0);
CLANG_FORWARD_PROC_SYMBOL(public_52a530);
CLANG_FORWARD_PROC_SYMBOL(public_52af60);
CLANG_FORWARD_PROC_SYMBOL(public_52afa0);
CLANG_FORWARD_PROC_SYMBOL(public_53e430);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e1d);

#define public_52a54e _public_52a54e
#define public_52a550 _public_52a550
#define public_52a580 _public_52a580
#define public_52a59f _public_52a59f
#define public_52a5c4 _public_52a5c4
#define public_52a5c8 _public_52a5c8
#define public_52a5e8 _public_52a5e8

PROC_DECLARE(0x52a530, internal_52a530, public_52a530);
extern "C" NAKED register_t __cdecl internal_52a530()
{
    __asm
    {
        mov cl, byte ptr ds : [public_6753fc]
        mov al, 1
        test al, cl
        jne public_52a54e
        or cl, al
        mov byte ptr ds : [public_6753fc], cl
        mov ecx, offset public_675400
        jmp public_52a550
        public_52a54e : nop
        ret 
        nop 
        public_52a550 : nop
        sub esp, 0xC
        push ebx
        push ebp
        push esi
        mov esi, ecx
        mov ecx, dword ptr ds : [esi+0x10]
        push edi
        mov edi, dword ptr ds : [esi+4]
        mov eax, dword ptr ds : [edi]
        xor ebp, ebp
        cmp ecx, ebp
        mov dword ptr ss : [esp+0x10], eax
        je public_52a5c4
        mov ecx, eax
        cmp eax, ecx
        jne public_52a5c4
        mov ebx, dword ptr ds : [edi+4]
        cmp ebx, dword ptr ds : [esi+8]
        mov edi, ebx
        je public_52a59f
        nop 
        lea esp, ss:[esp]
        public_52a580 : nop
        mov eax, dword ptr ds : [edi+8]
        push eax
        mov ecx, esi
        call public_52af60
        mov edi, dword ptr ds : [edi]
        push ebx
        call public_5b7e1d
        mov eax, dword ptr ds : [esi+8]
        add esp, 4
        cmp edi, eax
        mov ebx, edi
        jne public_52a580
        public_52a59f : nop
        mov ecx, dword ptr ds : [esi+4]
        mov edx, dword ptr ds : [esi+8]
        mov dword ptr ds : [ecx+4], edx
        mov eax, dword ptr ds : [esi+4]
        mov dword ptr ds : [esi+0x10], ebp
        mov dword ptr ds : [eax], eax
        mov eax, dword ptr ds : [esi+4]
        mov dword ptr ds : [eax+8], eax
        lea eax, ss:[esp+0x14]
        push eax
        mov ecx, esi
        call public_53e430
        jmp public_52a5e8
        public_52a5c4 : nop
        cmp eax, edi
        je public_52a5e8
        public_52a5c8 : nop
        lea ecx, ss:[esp+0x10]
        mov ebx, eax
        call public_52afa0
        push ebx
        lea ecx, ss:[esp+0x1C]
        push ecx
        mov ecx, esi
        call public_46c8c0
        mov eax, dword ptr ss : [esp+0x10]
        cmp eax, edi
        jne public_52a5c8
        public_52a5e8 : nop
        mov edx, dword ptr ds : [esi+4]
        push edx
        call public_5b7e1d
        mov eax, dword ptr ds : [esi+8]
        push eax
        mov dword ptr ds : [esi+4], ebp
        mov dword ptr ds : [esi+0x10], ebp
        call public_5b7e1d
        add esp, 8
        pop edi
        mov dword ptr ds : [esi+8], ebp
        pop esi
        pop ebp
        pop ebx
        add esp, 0xC
        ret 
        UNREACHABLE_TRAP(0x52a530)
    }
}

#undef public_52a54e
#undef public_52a550
#undef public_52a580
#undef public_52a59f
#undef public_52a5c4
#undef public_52a5c8
#undef public_52a5e8
