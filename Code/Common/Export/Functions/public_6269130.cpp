#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_626c1e0);
CLANG_FORWARD_PROC_SYMBOL(public_6391d5a);
CLANG_FORWARD_PROC_SYMBOL(public_6391d9c);

#define public_626914e _public_626914e
#define public_6269156 _public_6269156
#define public_6269161 _public_6269161
#define public_6269169 _public_6269169
#define public_6269176 _public_6269176
#define public_626918f _public_626918f
#define public_626919a _public_626919a
#define public_62691a2 _public_62691a2
#define public_62691ad _public_62691ad
#define public_62691b7 _public_62691b7
#define public_62691bf _public_62691bf
#define public_62691c7 _public_62691c7
#define public_62691cf _public_62691cf
#define public_62691d7 _public_62691d7
#define public_62691e7 _public_62691e7
#define public_62691ef _public_62691ef
#define public_6269200 _public_6269200
#define public_6269219 _public_6269219
#define public_6269225 _public_6269225
#define public_6269239 _public_6269239
#define public_6269244 _public_6269244
#define public_626924c _public_626924c
#define public_6269265 _public_6269265
#define public_6269279 _public_6269279
#define public_6269281 _public_6269281
#define public_6269287 _public_6269287
#define public_62692a2 _public_62692a2
#define public_62692b6 _public_62692b6

PROC_DECLARE(0x6269130, internal_6269130, public_6269130);
extern "C" NAKED register_t __cdecl internal_6269130()
{
    __asm
    {
        push ecx
        push ebx
        push ebp
        mov ebp, dword ptr ss : [esp+0x10]
        push esi
        push edi
        mov edi, ecx
        cmp edi, ebp
        mov dword ptr ss : [esp+0x10], edi
        je public_62691ad
        mov eax, dword ptr ss : [ebp+4]
        test eax, eax
        jne public_626914e
        xor edx, edx
        jmp public_6269156
        public_626914e : nop
        mov edx, dword ptr ss : [ebp+8]
        sub edx, eax
        sar edx, 5
        public_6269156 : nop
        mov esi, dword ptr ds : [edi+4]
        test esi, esi
        jne public_6269161
        xor ecx, ecx
        jmp public_6269169
        public_6269161 : nop
        mov ecx, dword ptr ds : [edi+8]
        sub ecx, esi
        sar ecx, 5
        public_6269169 : nop
        cmp edx, ecx
        ja public_62691b7
        mov ebx, dword ptr ss : [ebp+8]
        cmp eax, ebx
        mov edx, esi
        je public_626918f
        public_6269176 : nop
        mov esi, eax
        mov edi, edx
        add eax, 0x20
        mov ecx, 8
        add edx, 0x20
        cmp eax, ebx
        rep movsd
        jne public_6269176
        mov edi, dword ptr ss : [esp+0x10]
        public_626918f : nop
        mov ecx, dword ptr ss : [ebp+4]
        test ecx, ecx
        jne public_626919a
        xor eax, eax
        jmp public_62691a2
        public_626919a : nop
        mov eax, dword ptr ss : [ebp+8]
        sub eax, ecx
        sar eax, 5
        public_62691a2 : nop
        mov ecx, dword ptr ds : [edi+4]
        shl eax, 5
        add eax, ecx
        mov dword ptr ds : [edi+8], eax
        public_62691ad : nop
        mov eax, edi
        pop edi
        pop esi
        pop ebp
        pop ebx
        pop ecx
        ret 4
        public_62691b7 : nop
        test eax, eax
        jne public_62691bf
        xor edx, edx
        jmp public_62691c7
        public_62691bf : nop
        mov edx, dword ptr ss : [ebp+8]
        sub edx, eax
        sar edx, 5
        public_62691c7 : nop
        test esi, esi
        jne public_62691cf
        xor ecx, ecx
        jmp public_62691d7
        public_62691cf : nop
        mov ecx, dword ptr ds : [edi+0xC]
        sub ecx, esi
        sar ecx, 5
        public_62691d7 : nop
        cmp edx, ecx
        ja public_6269265
        test esi, esi
        jne public_62691e7
        xor ecx, ecx
        jmp public_62691ef
        public_62691e7 : nop
        mov ecx, dword ptr ds : [edi+8]
        sub ecx, esi
        sar ecx, 5
        public_62691ef : nop
        shl ecx, 5
        add ecx, eax
        mov edx, ecx
        cmp eax, edx
        mov ebx, esi
        je public_6269219
        lea esp, ss:[esp]
        public_6269200 : nop
        mov esi, eax
        mov edi, ebx
        add eax, 0x20
        mov ecx, 8
        add ebx, 0x20
        cmp eax, edx
        rep movsd
        jne public_6269200
        mov edi, dword ptr ss : [esp+0x10]
        public_6269219 : nop
        mov ebx, dword ptr ss : [ebp+8]
        cmp edx, ebx
        mov edi, dword ptr ds : [edi+8]
        mov esi, edx
        je public_6269239
        public_6269225 : nop
        push esi
        push edi
        call public_626c1e0
        add esi, 0x20
        add esp, 8
        add edi, 0x20
        cmp esi, ebx
        jne public_6269225
        public_6269239 : nop
        mov ecx, dword ptr ss : [ebp+4]
        test ecx, ecx
        jne public_6269244
        xor eax, eax
        jmp public_626924c
        public_6269244 : nop
        mov eax, dword ptr ss : [ebp+8]
        sub eax, ecx
        sar eax, 5
        public_626924c : nop
        mov ecx, dword ptr ss : [esp+0x10]
        mov edx, dword ptr ds : [ecx+4]
        pop edi
        shl eax, 5
        pop esi
        add eax, edx
        pop ebp
        mov dword ptr ds : [ecx+8], eax
        mov eax, ecx
        pop ebx
        pop ecx
        ret 4
        public_6269265 : nop
        push esi
        call public_6391d5a
        mov ecx, dword ptr ss : [ebp+4]
        add esp, 4
        test ecx, ecx
        jne public_6269279
        xor eax, eax
        jmp public_6269281
        public_6269279 : nop
        mov eax, dword ptr ss : [ebp+8]
        sub eax, ecx
        sar eax, 5
        public_6269281 : nop
        test eax, eax
        jge public_6269287
        xor eax, eax
        public_6269287 : nop
        shl eax, 5
        push eax
        call public_6391d9c
        mov dword ptr ds : [edi+4], eax
        mov ebx, dword ptr ss : [ebp+8]
        mov esi, dword ptr ss : [ebp+4]
        add esp, 4
        cmp esi, ebx
        mov edi, eax
        je public_62692b6
        public_62692a2 : nop
        push esi
        push edi
        call public_626c1e0
        add esi, 0x20
        add esp, 8
        add edi, 0x20
        cmp esi, ebx
        jne public_62692a2
        public_62692b6 : nop
        mov eax, dword ptr ss : [esp+0x10]
        mov dword ptr ds : [eax+8], edi
        mov dword ptr ds : [eax+0xC], edi
        pop edi
        pop esi
        pop ebp
        pop ebx
        pop ecx
        ret 4
        UNREACHABLE_TRAP(0x6269130)
    }
}

#undef public_626914e
#undef public_6269156
#undef public_6269161
#undef public_6269169
#undef public_6269176
#undef public_626918f
#undef public_626919a
#undef public_62691a2
#undef public_62691ad
#undef public_62691b7
#undef public_62691bf
#undef public_62691c7
#undef public_62691cf
#undef public_62691d7
#undef public_62691e7
#undef public_62691ef
#undef public_6269200
#undef public_6269219
#undef public_6269225
#undef public_6269239
#undef public_6269244
#undef public_626924c
#undef public_6269265
#undef public_6269279
#undef public_6269281
#undef public_6269287
#undef public_62692a2
#undef public_62692b6
