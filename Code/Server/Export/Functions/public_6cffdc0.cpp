#include "Server-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6cf7720);
CLANG_FORWARD_PROC_SYMBOL(public_6cffdc0);
CLANG_FORWARD_PROC_SYMBOL(public_6d43650);
CLANG_FORWARD_PROC_SYMBOL(public_6d5ffb0);

#define public_6cffde0 _public_6cffde0
#define public_6cffdf0 _public_6cffdf0
#define public_6cffe1d _public_6cffe1d
#define public_6cffe40 _public_6cffe40
#define public_6cffe6d _public_6cffe6d
#define public_6cffe80 _public_6cffe80
#define public_6cffea7 _public_6cffea7
#define public_6cffeb8 _public_6cffeb8

PROC_DECLARE(0x6cffdc0, internal_6cffdc0, public_6cffdc0);
extern "C" NAKED register_t __cdecl internal_6cffdc0()
{
    __asm
    {
        mov eax, dword ptr ds : [public_6d8d8f8]
        sub esp, 0x1C
        push edi
        mov byte ptr ds : [public_6d8d928], 1
        mov edi, dword ptr ds : [eax]
        cmp edi, eax
        je public_6cffeb8
        push ebx
        push ebp
        push esi
        lea ecx, ds:[ecx]
        public_6cffde0 : nop
        mov eax, dword ptr ds : [edi+8]
        mov ecx, dword ptr ds : [eax+8]
        mov esi, dword ptr ds : [ecx]
        cmp esi, ecx
        je public_6cffe1d
        lea esp, ss:[esp]
        public_6cffdf0 : nop
        mov ecx, dword ptr ds : [esi+8]
        mov dword ptr ss : [esp+0x18], eax
        mov dword ptr ss : [esp+0x14], ecx
        mov edx, dword ptr ds : [eax+0x24]
        lea eax, ss:[esp+0x14]
        push eax
        push 0x2D
        mov dword ptr ss : [esp+0x24], edx
        call public_6d43650
        mov eax, dword ptr ds : [edi+8]
        mov esi, dword ptr ds : [esi]
        mov ecx, dword ptr ds : [eax+8]
        add esp, 8
        cmp esi, ecx
        jne public_6cffdf0
        public_6cffe1d : nop
        mov ecx, dword ptr ds : [edi+8]
        mov eax, dword ptr ds : [ecx+8]
        mov edx, dword ptr ds : [eax]
        add ecx, 4
        push eax
        push edx
        lea edx, ss:[esp+0x18]
        push edx
        call public_6cf7720
        mov eax, dword ptr ds : [edi+8]
        mov ecx, dword ptr ds : [eax+0x14]
        mov esi, dword ptr ds : [ecx]
        cmp esi, ecx
        je public_6cffe6d
        public_6cffe40 : nop
        mov ecx, dword ptr ds : [esi+8]
        mov dword ptr ss : [esp+0x24], eax
        mov dword ptr ss : [esp+0x20], ecx
        mov edx, dword ptr ds : [eax+0x24]
        lea eax, ss:[esp+0x20]
        push eax
        push 0x2E
        mov dword ptr ss : [esp+0x30], edx
        call public_6d43650
        mov eax, dword ptr ds : [edi+8]
        mov esi, dword ptr ds : [esi]
        mov ecx, dword ptr ds : [eax+0x14]
        add esp, 8
        cmp esi, ecx
        jne public_6cffe40
        public_6cffe6d : nop
        mov ebx, dword ptr ds : [edi+8]
        mov ebp, dword ptr ds : [ebx+0x14]
        mov esi, dword ptr ss : [ebp]
        add ebx, 0x10
        cmp esi, ebp
        je public_6cffea7
        lea ecx, ds:[ecx]
        public_6cffe80 : nop
        mov eax, esi
        mov ecx, dword ptr ds : [eax+4]
        mov edx, dword ptr ds : [eax]
        mov esi, dword ptr ds : [esi]
        mov dword ptr ds : [ecx], edx
        mov ecx, dword ptr ds : [eax]
        mov edx, dword ptr ds : [eax+4]
        push eax
        mov dword ptr ds : [ecx+4], edx
        call public_6d5ffb0
        mov ecx, dword ptr ds : [ebx+8]
        add esp, 4
        dec ecx
        cmp esi, ebp
        mov dword ptr ds : [ebx+8], ecx
        jne public_6cffe80
        public_6cffea7 : nop
        mov edi, dword ptr ds : [edi]
        cmp edi, dword ptr ds : [public_6d8d8f8]
        jne public_6cffde0
        pop esi
        pop ebp
        pop ebx
        public_6cffeb8 : nop
        mov byte ptr ds : [public_6d8d928], 0
        pop edi
        add esp, 0x1C
        ret 
        UNREACHABLE_TRAP(0x6cffdc0)
    }
}

#undef public_6cffde0
#undef public_6cffdf0
#undef public_6cffe1d
#undef public_6cffe40
#undef public_6cffe6d
#undef public_6cffe80
#undef public_6cffea7
#undef public_6cffeb8
