#include "RemoteClient-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6b4e780);
CLANG_FORWARD_PROC_SYMBOL(public_6b4e7a0);
CLANG_FORWARD_PROC_SYMBOL(public_6b4ecd0);
CLANG_FORWARD_PROC_SYMBOL(public_6b6a092);
CLANG_FORWARD_PROC_SYMBOL(public_6b6a134);

#define public_6b440d2 _public_6b440d2
#define public_6b440ea _public_6b440ea
#define public_6b44112 _public_6b44112
#define public_6b4413f _public_6b4413f
#define public_6b4415a _public_6b4415a
#define public_6b44179 _public_6b44179
#define public_6b44192 _public_6b44192
#define public_6b441c6 _public_6b441c6
#define public_6b441e6 _public_6b441e6
#define public_6b44224 _public_6b44224
#define public_6b44230 _public_6b44230

PROC_DECLARE(0x6b44090, internal_6b44090, public_6b44090);
extern "C" NAKED register_t __cdecl internal_6b44090()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        push ebx
        push ebp
        push esi
        push edi
        mov edi, dword ptr ss : [esp+0x18]
        mov ebp, ecx
        lea ebx, ss:[ebp+0x10]
        push ebx
        push edi
        lea esi, ss:[ebp+0x18]
        push esi
        mov dword ptr ds : [ebx+4], edi
        mov dword ptr ds : [ebx+8], eax
        mov dword ptr ds : [ebx], 0
        mov dword ptr ds : [ebx+0xC], 0
        call public_6b4e780
        test eax, eax
        mov dword ptr ss : [ebp+0x1C], eax
        je public_6b440d2
        pop edi
        pop esi
        pop ebp
        mov eax, 0x17
        pop ebx
        ret 0xC
        public_6b440d2 : nop
        mov edx, dword ptr ds : [ebx]
        mov ecx, dword ptr ds : [ebx+4]
        add edx, 4
        mov eax, edx
        cmp eax, ecx
        mov dword ptr ds : [ebx], edx
        mov ecx, 0x17
        jbe public_6b440ea
        mov dword ptr ds : [ebx+0xC], ecx
        public_6b440ea : nop
        mov eax, dword ptr ss : [ebp+0x1C]
        test eax, eax
        jne public_6b44230
        mov eax, dword ptr ds : [esi]
        mov edx, dword ptr ds : [eax]
        add eax, 4
        mov dword ptr ds : [esi], eax
        mov dword ptr ss : [ebp+0x20], edx
        mov eax, dword ptr ds : [ebx]
        mov edx, dword ptr ds : [ebx+4]
        add eax, 4
        cmp eax, edx
        mov dword ptr ds : [ebx], eax
        jbe public_6b44112
        mov dword ptr ds : [ebx+0xC], ecx
        public_6b44112 : nop
        mov eax, dword ptr ss : [ebp+0x1C]
        test eax, eax
        jne public_6b44230
        mov eax, dword ptr ds : [esi]
        mov edx, dword ptr ds : [eax]
        add eax, 4
        mov dword ptr ds : [esi], eax
        mov eax, edx
        test eax, eax
        mov dword ptr ss : [ebp+0x24], edx
        jbe public_6b441c6
        mov edx, dword ptr ds : [ebx]
        add edx, eax
        cmp edx, dword ptr ds : [ebx+4]
        jbe public_6b4413f
        mov dword ptr ds : [ebx+0xC], ecx
        public_6b4413f : nop
        mov eax, dword ptr ss : [ebp+0x1C]
        test eax, eax
        jne public_6b44230
        mov eax, dword ptr ss : [ebp+0x38]
        test eax, eax
        je public_6b4415a
        push eax
        call public_6b6a092
        add esp, 4
        public_6b4415a : nop
        mov eax, dword ptr ss : [ebp+0x24]
        push eax
        call public_6b6a134
        add esp, 4
        test eax, eax
        mov dword ptr ss : [ebp+0x38], eax
        jne public_6b44179
        pop edi
        pop esi
        pop ebp
        mov eax, 5
        pop ebx
        ret 0xC
        public_6b44179 : nop
        mov ecx, dword ptr ss : [ebp+0x24]
        mov edx, dword ptr ds : [ebx]
        add edx, ecx
        mov ecx, dword ptr ds : [ebx+4]
        mov eax, edx
        cmp eax, ecx
        mov dword ptr ds : [ebx], edx
        jbe public_6b44192
        mov dword ptr ds : [ebx+0xC], 0x17
        public_6b44192 : nop
        mov eax, dword ptr ss : [ebp+0x1C]
        test eax, eax
        jne public_6b44230
        mov eax, dword ptr ss : [ebp+0x24]
        mov esi, dword ptr ds : [esi]
        mov edi, dword ptr ss : [ebp+0x38]
        mov ecx, eax
        mov edx, ecx
        shr ecx, 2
        mov dword ptr ss : [esp+0x14], esi
        rep movsd
        mov ecx, edx
        and ecx, 3
        rep movsb
        mov ecx, dword ptr ss : [esp+0x14]
        mov edi, dword ptr ss : [esp+0x18]
        add ecx, eax
        mov dword ptr ss : [ebp+0x18], ecx
        public_6b441c6 : nop
        push ebx
        push edi
        lea eax, ss:[ebp+0x18]
        push eax
        mov ecx, ebp
        call public_6b4e7a0
        test eax, eax
        mov dword ptr ss : [ebp+0x1C], eax
        je public_6b441e6
        pop edi
        pop esi
        pop ebp
        mov eax, 0x17
        pop ebx
        ret 0xC
        public_6b441e6 : nop
        mov edx, dword ptr ds : [ebx]
        mov eax, dword ptr ss : [esp+0x1C]
        mov dword ptr ds : [eax], edx
        mov ecx, dword ptr ss : [ebp+0xC]
        push ecx
        call public_6b4ecd0
        mov ecx, eax
        mov edx, dword ptr ds : [ecx+4]
        mov ebp, dword ptr ds : [ecx+0x1C]
        mov eax, dword ptr ds : [ecx+0x14]
        add esp, 4
        inc edx
        mov dword ptr ds : [ecx+4], edx
        mov esi, edx
        mov edx, dword ptr ds : [ebx]
        add edx, 2
        add ebp, edx
        mov dword ptr ds : [ecx+0x1C], ebp
        mov ebx, dword ptr ds : [ebx]
        add eax, 2
        cmp ebx, eax
        jbe public_6b44224
        add ebx, 2
        mov dword ptr ds : [ecx+0x14], ebx
        public_6b44224 : nop
        mov eax, dword ptr ds : [ecx+0x1C]
        xor edx, edx
        div esi
        mov dword ptr ds : [ecx+0xC], eax
        xor eax, eax
        public_6b44230 : nop
        pop edi
        pop esi
        pop ebp
        pop ebx
        ret 0xC
        UNREACHABLE_TRAP(0x6b44090)
    }
}

#undef public_6b440d2
#undef public_6b440ea
#undef public_6b44112
#undef public_6b4413f
#undef public_6b4415a
#undef public_6b44179
#undef public_6b44192
#undef public_6b441c6
#undef public_6b441e6
#undef public_6b44224
#undef public_6b44230
