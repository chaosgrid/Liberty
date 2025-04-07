#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ed4010);

#define public_6ed4030 _public_6ed4030
#define public_6ed4045 _public_6ed4045
#define public_6ed4059 _public_6ed4059
#define public_6ed405c _public_6ed405c
#define public_6ed4077 _public_6ed4077
#define public_6ed4090 _public_6ed4090
#define public_6ed40a0 _public_6ed40a0
#define public_6ed40a3 _public_6ed40a3
#define public_6ed40d0 _public_6ed40d0
#define public_6ed40ee _public_6ed40ee

PROC_DECLARE(0x6ed4010, internal_6ed4010, public_6ed4010);
extern "C" NAKED register_t __cdecl internal_6ed4010()
{
    __asm
    {
        push ecx
        push ebx
        push ebp
        push esi
        push edi
        mov edi, dword ptr ss : [esp+0x18]
        mov dword ptr ss : [esp+0x10], ecx
        push 0
        mov ecx, edi
        call dword ptr ds : [public_6fb3048]
        mov ebx, eax
        mov esi, offset public_6fce5d0
        xor ebp, ebp
        public_6ed4030 : nop
        mov eax, dword ptr ds : [esi]
        test eax, eax
        je public_6ed4045
        push eax
        push ebx
        call dword ptr ds : [public_6fb3294]
        add esp, 8
        test eax, eax
        je public_6ed4059
        public_6ed4045 : nop
        add ebp, 8
        add esi, 8
        cmp ebp, 0x158
        jb public_6ed4030
        mov ebx, dword ptr ss : [esp+0x18]
        jmp public_6ed405c
        public_6ed4059 : nop
        mov ebx, dword ptr ds : [esi+4]
        public_6ed405c : nop
        mov eax, dword ptr ss : [esp+0x10]
        push 1
        mov ecx, edi
        mov dword ptr ds : [eax], ebx
        call dword ptr ds : [public_6fb3048]
        mov dword ptr ss : [esp+0x18], eax
        mov esi, offset public_6fce5d0
        xor ebp, ebp
        public_6ed4077 : nop
        mov eax, dword ptr ds : [esi]
        test eax, eax
        je public_6ed4090
        mov ecx, dword ptr ss : [esp+0x18]
        push eax
        push ecx
        call dword ptr ds : [public_6fb3294]
        add esp, 8
        test eax, eax
        je public_6ed40a0
        public_6ed4090 : nop
        add ebp, 8
        add esi, 8
        cmp ebp, 0x158
        jb public_6ed4077
        jmp public_6ed40a3
        public_6ed40a0 : nop
        mov ebx, dword ptr ds : [esi+4]
        public_6ed40a3 : nop
        mov ebp, dword ptr ss : [esp+0x10]
        push 2
        mov ecx, edi
        mov dword ptr ss : [ebp+4], ebx
        call dword ptr ds : [public_6fb3020]
        mov esi, 3
        push esi
        mov ecx, edi
        mov dword ptr ss : [ebp+8], eax
        call dword ptr ds : [public_6fb306c]
        test al, al
        jne public_6ed40ee
        lea ebx, ss:[ebp+0xC]
        lea esp, ss:[esp]
        public_6ed40d0 : nop
        mov eax, esi
        push eax
        mov ecx, edi
        inc esi
        call dword ptr ds : [public_6fb3020]
        mov dword ptr ds : [ebx], eax
        push esi
        mov ecx, edi
        add ebx, 4
        call dword ptr ds : [public_6fb306c]
        test al, al
        je public_6ed40d0
        public_6ed40ee : nop
        pop edi
        pop esi
        pop ebp
        mov al, 1
        pop ebx
        pop ecx
        ret 4
        UNREACHABLE_TRAP(0x6ed4010)
    }
}

#undef public_6ed4030
#undef public_6ed4045
#undef public_6ed4059
#undef public_6ed405c
#undef public_6ed4077
#undef public_6ed4090
#undef public_6ed40a0
#undef public_6ed40a3
#undef public_6ed40d0
#undef public_6ed40ee
