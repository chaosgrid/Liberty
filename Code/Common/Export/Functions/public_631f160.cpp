#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_62be400);
CLANG_FORWARD_PROC_SYMBOL(public_6302d50);
CLANG_FORWARD_PROC_SYMBOL(public_63429f0);
CLANG_FORWARD_PROC_SYMBOL(public_6391d5a);

#define public_631f176 _public_631f176
#define public_631f1a0 _public_631f1a0
#define public_631f1bf _public_631f1bf
#define public_631f1dc _public_631f1dc
#define public_631f1e0 _public_631f1e0
#define public_631f200 _public_631f200
#define public_631f213 _public_631f213
#define public_631f21e _public_631f21e
#define public_631f222 _public_631f222
#define public_631f230 _public_631f230
#define public_631f23a _public_631f23a
#define public_631f241 _public_631f241
#define public_631f250 _public_631f250

PROC_DECLARE(0x631f160, internal_631f160, public_631f160);
extern "C" NAKED register_t __cdecl internal_631f160()
{
    __asm
    {
        mov eax, dword ptr ds : [public_64018f0]
        sub esp, 8
        push ebx
        mov ebx, dword ptr ds : [eax]
        cmp ebx, eax
        je public_631f250
        push ebp
        push esi
        push edi
        public_631f176 : nop
        mov edi, dword ptr ds : [ebx+0x34]
        mov ecx, dword ptr ds : [ebx+0x40]
        test ecx, ecx
        mov eax, dword ptr ds : [edi]
        lea esi, ds:[ebx+0x30]
        mov dword ptr ss : [esp+0x10], eax
        je public_631f1dc
        mov ecx, eax
        cmp eax, ecx
        jne public_631f1dc
        mov ebp, dword ptr ds : [edi+4]
        cmp ebp, dword ptr ds : [esi+8]
        mov edi, ebp
        je public_631f1bf
        lea esp, ss:[esp]
        public_631f1a0 : nop
        mov eax, dword ptr ds : [edi+8]
        push eax
        mov ecx, esi
        call public_6302d50
        mov edi, dword ptr ds : [edi]
        push ebp
        call public_6391d5a
        mov eax, dword ptr ds : [esi+8]
        add esp, 4
        cmp edi, eax
        mov ebp, edi
        jne public_631f1a0
        public_631f1bf : nop
        mov ecx, dword ptr ds : [esi+4]
        mov edx, dword ptr ds : [esi+8]
        mov dword ptr ds : [ecx+4], edx
        mov eax, dword ptr ds : [esi+4]
        mov dword ptr ds : [esi+0x10], 0
        mov dword ptr ds : [eax], eax
        mov esi, dword ptr ds : [esi+4]
        mov dword ptr ds : [esi+8], esi
        jmp public_631f200
        public_631f1dc : nop
        cmp eax, edi
        je public_631f200
        public_631f1e0 : nop
        lea ecx, ss:[esp+0x10]
        mov ebp, eax
        call public_63429f0
        push ebp
        lea eax, ss:[esp+0x18]
        push eax
        mov ecx, esi
        call public_62be400
        mov eax, dword ptr ss : [esp+0x10]
        cmp eax, edi
        jne public_631f1e0
        public_631f200 : nop
        mov ecx, dword ptr ds : [ebx+8]
        mov al, byte ptr ds : [ecx+0x45]
        test al, al
        jne public_631f222
        mov eax, dword ptr ds : [ecx]
        mov dl, byte ptr ds : [eax+0x45]
        test dl, dl
        jne public_631f21e
        public_631f213 : nop
        mov ecx, eax
        mov eax, dword ptr ds : [ecx]
        mov dl, byte ptr ds : [eax+0x45]
        test dl, dl
        je public_631f213
        public_631f21e : nop
        mov ebx, ecx
        jmp public_631f241
        public_631f222 : nop
        mov eax, dword ptr ds : [ebx+4]
        cmp ebx, dword ptr ds : [eax+8]
        jne public_631f23a
        lea ebx, ds:[ebx]
        public_631f230 : nop
        mov ebx, eax
        mov eax, dword ptr ds : [eax+4]
        cmp ebx, dword ptr ds : [eax+8]
        je public_631f230
        public_631f23a : nop
        cmp dword ptr ds : [ebx+8], eax
        je public_631f241
        mov ebx, eax
        public_631f241 : nop
        cmp ebx, dword ptr ds : [public_64018f0]
        jne public_631f176
        pop edi
        pop esi
        pop ebp
        public_631f250 : nop
        pop ebx
        add esp, 8
        ret 
        UNREACHABLE_TRAP(0x631f160)
    }
}

#undef public_631f176
#undef public_631f1a0
#undef public_631f1bf
#undef public_631f1dc
#undef public_631f1e0
#undef public_631f200
#undef public_631f213
#undef public_631f21e
#undef public_631f222
#undef public_631f230
#undef public_631f23a
#undef public_631f241
#undef public_631f250
