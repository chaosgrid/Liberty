#include "SoundStreamer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ef1fb0);
CLANG_FORWARD_PROC_SYMBOL(public_6ef2190);
CLANG_FORWARD_PROC_SYMBOL(public_6ef4018);
CLANG_FORWARD_PROC_SYMBOL(public_6ef401e);
CLANG_FORWARD_PROC_SYMBOL(public_6ef4024);

#define public_6ef21bb _public_6ef21bb
#define public_6ef21d9 _public_6ef21d9
#define public_6ef223b _public_6ef223b
#define public_6ef2281 _public_6ef2281
#define public_6ef22bc _public_6ef22bc
#define public_6ef22c4 _public_6ef22c4

PROC_DECLARE(0x6ef2190, internal_6ef2190, public_6ef2190);
extern "C" NAKED register_t __cdecl internal_6ef2190()
{
    __asm
    {
        push ebx
        push esi
        mov esi, ecx
        mov eax, dword ptr ds : [esi+0x28]
        test eax, eax
        push edi
        mov dword ptr ds : [esi+0x40], 0
        mov dword ptr ds : [esi+0x50], 0
        je public_6ef22c4
        mov ebx, dword ptr ss : [esp+0x14]
        cmp ebx, 0xFFFFFFFF
        jne public_6ef21bb
        or eax, ebx
        jmp public_6ef21d9
        public_6ef21bb : nop
        mov eax, dword ptr ds : [esi+0xEC]
        imul eax, ebx
        xor edx, edx
        div dword ptr ds : [esi+0xF0]
        mov ecx, dword ptr ds : [esi+0x94]
        xor edx, edx
        div ecx
        imul eax, ecx
        public_6ef21d9 : nop
        push eax
        mov ecx, esi
        call public_6ef1fb0
        mov ecx, dword ptr ds : [esi+0x38]
        test ecx, ecx
        je public_6ef22c4
        mov edi, dword ptr ds : [esi+0x3C]
        test edi, edi
        je public_6ef22c4
        mov eax, dword ptr ds : [esi+0xD4]
        cmp word ptr ds : [eax], 0x55
        jne public_6ef223b
        cmp ecx, dword ptr ds : [esi+0x9C]
        jne public_6ef223b
        cmp dword ptr ds : [esi+0xD0], 0xFFFFFFFF
        jne public_6ef223b
        movzx edx, word ptr ds : [esi+0xDA]
        movzx eax, word ptr ds : [esi+0xE6]
        imul eax, edx
        cdq 
        and edx, 7
        add eax, edx
        sar eax, 3
        imul eax, dword ptr ds : [esi+0xCC]
        mov dword ptr ds : [esi+0xD0], eax
        public_6ef223b : nop
        mov eax, dword ptr ss : [esp+0x10]
        mov dword ptr ds : [esi+0x4C], ebx
        xor ebx, ebx
        mov dword ptr ds : [esi+0x48], eax
        cmp ecx, dword ptr ds : [esi+0x9C]
        mov ecx, dword ptr ds : [esi+0xA4]
        mov eax, dword ptr ds : [esi+0xA0]
        setne bl
        add ecx, edi
        dec ebx
        and ebx, 0xFFFFFFF0
        add ebx, 0x24
        cmp ecx, eax
        jb public_6ef2281
        mov ecx, dword ptr ds : [esi+0x94]
        cmp edi, ecx
        jbe public_6ef2281
        mov eax, edi
        sub eax, ecx
        cmp eax, ecx
        mov dword ptr ds : [esi+0x3C], eax
        jae public_6ef2281
        mov dword ptr ds : [esi+0x3C], ecx
        public_6ef2281 : nop
        mov edx, dword ptr ds : [esi+0x28]
        push 0
        lea edi, ds:[esi+0x2C]
        push edi
        push edx
        call public_6ef4024
        mov eax, dword ptr ds : [esi+0x28]
        push ebx
        push edi
        push eax
        call public_6ef401e
        mov ecx, dword ptr ds : [esi+0x28]
        push 0
        push edi
        push ecx
        mov ebx, eax
        call public_6ef4018
        test ebx, ebx
        jne public_6ef22bc
        test eax, eax
        jne public_6ef22bc
        pop edi
        pop esi
        mov eax, 1
        pop ebx
        ret 8
        public_6ef22bc : nop
        pop edi
        pop esi
        xor eax, eax
        pop ebx
        ret 8
        public_6ef22c4 : nop
        pop edi
        pop esi
        xor al, al
        pop ebx
        ret 8
        UNREACHABLE_TRAP(0x6ef2190)
    }
}

#undef public_6ef21bb
#undef public_6ef21d9
#undef public_6ef223b
#undef public_6ef2281
#undef public_6ef22bc
#undef public_6ef22c4
