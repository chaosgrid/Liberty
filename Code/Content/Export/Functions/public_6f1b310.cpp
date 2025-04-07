#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f1b310);

#define public_6f1b330 _public_6f1b330
#define public_6f1b340 _public_6f1b340
#define public_6f1b373 _public_6f1b373
#define public_6f1b37a _public_6f1b37a
#define public_6f1b390 _public_6f1b390
#define public_6f1b39b _public_6f1b39b
#define public_6f1b39f _public_6f1b39f
#define public_6f1b3a7 _public_6f1b3a7
#define public_6f1b3b1 _public_6f1b3b1
#define public_6f1b3b8 _public_6f1b3b8
#define public_6f1b3c4 _public_6f1b3c4

PROC_DECLARE(0x6f1b310, internal_6f1b310, public_6f1b310);
extern "C" NAKED register_t __cdecl internal_6f1b310()
{
    __asm
    {
        push ecx
        mov edx, ecx
        mov eax, dword ptr ds : [edx+0x40]
        push ebx
        mov ebx, dword ptr ds : [eax]
        cmp ebx, eax
        mov dword ptr ss : [esp+4], edx
        je public_6f1b3c4
        push ebp
        mov ebp, dword ptr ss : [esp+0x14]
        push esi
        push edi
        lea esp, ss:[esp]
        public_6f1b330 : nop
        mov edi, dword ptr ds : [ebx+0x10]
        test edi, edi
        je public_6f1b37a
        mov eax, dword ptr ds : [edi+0x10]
        mov esi, dword ptr ds : [eax]
        cmp esi, eax
        je public_6f1b37a
        public_6f1b340 : nop
        mov ecx, dword ptr ss : [esp+0x18]
        mov eax, dword ptr ds : [esi+8]
        mov ecx, dword ptr ds : [ecx]
        cmp ecx, dword ptr ds : [eax+8]
        jne public_6f1b373
        mov dword ptr ds : [eax+0x1C], ebp
        mov eax, dword ptr ds : [esi+8]
        mov eax, dword ptr ds : [eax+0x10]
        cmp eax, 0xFFFFFFFF
        jle public_6f1b373
        push ebp
        push eax
        add edx, 4
        push edx
        lea ecx, ds:[edi+4]
        push ecx
        call dword ptr ds : [public_6fb3658]
        mov edx, dword ptr ss : [esp+0x20]
        add esp, 0x10
        public_6f1b373 : nop
        mov esi, dword ptr ds : [esi]
        cmp esi, dword ptr ds : [edi+0x10]
        jne public_6f1b340
        public_6f1b37a : nop
        mov ecx, dword ptr ds : [ebx+8]
        mov al, byte ptr ds : [ecx+0x15]
        test al, al
        jne public_6f1b39f
        mov eax, dword ptr ds : [ecx]
        mov bl, byte ptr ds : [eax+0x15]
        test bl, bl
        jne public_6f1b39b
        lea ecx, ds:[ecx]
        public_6f1b390 : nop
        mov ecx, eax
        mov eax, dword ptr ds : [ecx]
        mov bl, byte ptr ds : [eax+0x15]
        test bl, bl
        je public_6f1b390
        public_6f1b39b : nop
        mov ebx, ecx
        jmp public_6f1b3b8
        public_6f1b39f : nop
        mov eax, dword ptr ds : [ebx+4]
        cmp ebx, dword ptr ds : [eax+8]
        jne public_6f1b3b1
        public_6f1b3a7 : nop
        mov ebx, eax
        mov eax, dword ptr ds : [eax+4]
        cmp ebx, dword ptr ds : [eax+8]
        je public_6f1b3a7
        public_6f1b3b1 : nop
        cmp dword ptr ds : [ebx+8], eax
        je public_6f1b3b8
        mov ebx, eax
        public_6f1b3b8 : nop
        cmp ebx, dword ptr ds : [edx+0x40]
        jne public_6f1b330
        pop edi
        pop esi
        pop ebp
        public_6f1b3c4 : nop
        pop ebx
        pop ecx
        ret 8
        UNREACHABLE_TRAP(0x6f1b310)
    }
}

#undef public_6f1b330
#undef public_6f1b340
#undef public_6f1b373
#undef public_6f1b37a
#undef public_6f1b390
#undef public_6f1b39b
#undef public_6f1b39f
#undef public_6f1b3a7
#undef public_6f1b3b1
#undef public_6f1b3b8
#undef public_6f1b3c4
