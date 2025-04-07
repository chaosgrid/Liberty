#include "Server-PCH.h"


#define public_6d35111 _public_6d35111
#define public_6d3512a _public_6d3512a
#define public_6d35136 _public_6d35136
#define public_6d35144 _public_6d35144
#define public_6d35148 _public_6d35148
#define public_6d35160 _public_6d35160
#define public_6d35167 _public_6d35167
#define public_6d35170 _public_6d35170
#define public_6d35189 _public_6d35189
#define public_6d351a2 _public_6d351a2
#define public_6d351b0 _public_6d351b0
#define public_6d351b9 _public_6d351b9

PROC_DECLARE(0x6d350d0, internal_6d350d0, public_6d350d0);
extern "C" NAKED register_t __cdecl internal_6d350d0()
{
    __asm
    {
        push ecx
        push ebx
        push esi
        mov esi, dword ptr ss : [esp+0x14]
        mov ax, word ptr ds : [esi]
        push edi
        mov edx, ecx
        xor edi, edi
        test ax, ax
        mov dword ptr ss : [esp+0xC], edx
        je public_6d35160
        cmp ax, 0xA
        je public_6d35160
        lea eax, ds:[esi+2]
        cmp eax, esi
        jne public_6d35136
        mov ecx, dword ptr ds : [edx+4]
        test ecx, ecx
        je public_6d35111
        mov edx, dword ptr ss : [esp+0x14]
        mov eax, dword ptr ds : [ecx]
        push esi
        push edx
        call dword ptr ds : [eax+4]
        pop edi
        pop esi
        movzx eax, al
        pop ebx
        pop ecx
        ret 8
        public_6d35111 : nop
        mov eax, dword ptr ss : [esp+0x14]
        mov cl, byte ptr ds : [eax+0x1C]
        test cl, cl
        je public_6d3512a
        cmp dword ptr ds : [eax+8], esi
        jne public_6d3512a
        pop edi
        pop esi
        xor eax, eax
        pop ebx
        pop ecx
        ret 8
        public_6d3512a : nop
        pop edi
        pop esi
        mov eax, 1
        pop ebx
        pop ecx
        ret 8
        public_6d35136 : nop
        mov ecx, dword ptr ds : [edx+0xC]
        test ecx, ecx
        je public_6d35144
        mov esi, eax
        mov edi, 1
        public_6d35144 : nop
        cmp edi, ecx
        jae public_6d35167
        public_6d35148 : nop
        mov ax, word ptr ds : [esi]
        test ax, ax
        je public_6d351b9
        cmp ax, 0xA
        je public_6d351b9
        add esi, 2
        inc edi
        cmp edi, ecx
        jb public_6d35148
        jmp public_6d35167
        public_6d35160 : nop
        mov eax, dword ptr ds : [edx+0xC]
        test eax, eax
        jne public_6d351b9
        public_6d35167 : nop
        mov ebx, dword ptr ss : [esp+0x14]
        nop 
        lea esp, ss:[esp]
        public_6d35170 : nop
        mov ecx, dword ptr ds : [edx+4]
        test ecx, ecx
        je public_6d351a2
        mov eax, dword ptr ds : [ecx]
        push esi
        push ebx
        call dword ptr ds : [eax+4]
        movzx eax, al
        test al, al
        jne public_6d351b0
        mov edx, dword ptr ss : [esp+0xC]
        public_6d35189 : nop
        cmp edi, dword ptr ds : [edx+0x10]
        jae public_6d351b9
        mov ax, word ptr ds : [esi]
        inc edi
        test ax, ax
        je public_6d351b9
        cmp ax, 0xA
        je public_6d351b9
        add esi, 2
        jmp public_6d35170
        public_6d351a2 : nop
        mov al, byte ptr ds : [ebx+0x1C]
        test al, al
        je public_6d351b0
        cmp dword ptr ds : [ebx+8], esi
        jne public_6d351b0
        jmp public_6d35189
        public_6d351b0 : nop
        pop edi
        pop esi
        mov al, 1
        pop ebx
        pop ecx
        ret 8
        public_6d351b9 : nop
        pop edi
        pop esi
        xor al, al
        pop ebx
        pop ecx
        ret 8
        UNREACHABLE_TRAP(0x6d350d0)
    }
}

#undef public_6d35111
#undef public_6d3512a
#undef public_6d35136
#undef public_6d35144
#undef public_6d35148
#undef public_6d35160
#undef public_6d35167
#undef public_6d35170
#undef public_6d35189
#undef public_6d351a2
#undef public_6d351b0
#undef public_6d351b9
