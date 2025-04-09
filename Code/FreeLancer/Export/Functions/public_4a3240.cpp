#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_4a3240);

#define public_4a3270 _public_4a3270
#define public_4a32a5 _public_4a32a5
#define public_4a32b9 _public_4a32b9
#define public_4a32bc _public_4a32bc
#define public_4a32dc _public_4a32dc
#define public_4a32ed _public_4a32ed
#define public_4a3303 _public_4a3303
#define public_4a3312 _public_4a3312
#define public_4a332b _public_4a332b
#define public_4a3347 _public_4a3347

PROC_DECLARE(0x4a3240, internal_4a3240, public_4a3240);
extern "C" NAKED register_t __cdecl internal_4a3240()
{
    __asm
    {
        sub esp, 8
        mov eax, dword ptr ss : [esp+0xC]
        push ebx
        mov ebx, ecx
        mov edx, dword ptr ds : [ebx+8]
        mov ecx, dword ptr ss : [esp+0x14]
        cmp ecx, edx
        push ebp
        push esi
        push edi
        mov dword ptr ss : [esp+0x10], ebx
        mov dword ptr ss : [esp+0x14], edx
        mov esi, eax
        je public_4a3303
        sub ecx, eax
        mov dword ptr ss : [esp+0x20], ecx
        lea esp, ss:[esp]
        public_4a3270 : nop
        mov ebp, dword ptr ds : [ecx+esi]
        test ebp, ebp
        je public_4a32dc
        push ebp
        call dword ptr ds : [public_5c71c8]
        mov ebx, eax
        mov eax, dword ptr ds : [esi+4]
        lea edi, ds:[ebx+1]
        add esp, 4
        cmp edi, eax
        jbe public_4a32bc
        mov eax, dword ptr ds : [esi]
        test eax, eax
        je public_4a32a5
        lea ecx, ds:[edi+edi]
        push ecx
        push eax
        call dword ptr ds : [public_5c71bc]
        add esp, 8
        mov dword ptr ds : [esi], eax
        jmp public_4a32b9
        public_4a32a5 : nop
        lea edx, ds:[edi+edi]
        push edx
        call dword ptr ds : [public_5c71cc]
        mov dword ptr ds : [esi], eax
        add esp, 4
        mov word ptr ds : [eax], 0
        public_4a32b9 : nop
        mov dword ptr ds : [esi+4], edi
        public_4a32bc : nop
        mov eax, dword ptr ds : [esi]
        push ebx
        push ebp
        push eax
        call dword ptr ds : [public_5c71c0]
        mov ecx, dword ptr ds : [esi]
        mov edx, dword ptr ss : [esp+0x20]
        mov word ptr ds : [ecx+ebx*2], 0
        mov ecx, dword ptr ss : [esp+0x2C]
        add esp, 0xC
        jmp public_4a32ed
        public_4a32dc : nop
        mov eax, dword ptr ds : [esi]
        test eax, eax
        je public_4a32ed
        cmp word ptr ds : [eax], 0
        je public_4a32ed
        mov word ptr ds : [eax], 0
        public_4a32ed : nop
        add esi, 8
        lea eax, ds:[ecx+esi]
        cmp eax, edx
        jne public_4a3270
        mov eax, dword ptr ss : [esp+0x1C]
        mov ebx, dword ptr ss : [esp+0x10]
        public_4a3303 : nop
        mov ebp, dword ptr ds : [ebx+8]
        cmp esi, ebp
        mov edi, esi
        je public_4a3347
        mov ebx, dword ptr ds : [public_5c71d8]
        public_4a3312 : nop
        mov eax, dword ptr ds : [edi]
        test eax, eax
        je public_4a332b
        push eax
        call ebx
        add esp, 4
        mov dword ptr ds : [edi], 0
        mov dword ptr ds : [edi+4], 0
        public_4a332b : nop
        add edi, 8
        cmp edi, ebp
        jne public_4a3312
        mov ecx, dword ptr ss : [esp+0x10]
        mov eax, dword ptr ss : [esp+0x1C]
        pop edi
        mov dword ptr ds : [ecx+8], esi
        pop esi
        pop ebp
        pop ebx
        add esp, 8
        ret 8
        public_4a3347 : nop
        pop edi
        mov dword ptr ds : [ebx+8], esi
        pop esi
        pop ebp
        pop ebx
        add esp, 8
        ret 8
        UNREACHABLE_TRAP(0x4a3240)
    }
}

#undef public_4a3270
#undef public_4a32a5
#undef public_4a32b9
#undef public_4a32bc
#undef public_4a32dc
#undef public_4a32ed
#undef public_4a3303
#undef public_4a3312
#undef public_4a332b
#undef public_4a3347
