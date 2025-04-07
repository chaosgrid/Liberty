#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6efccd0);
CLANG_FORWARD_PROC_SYMBOL(public_6efeb00);
CLANG_FORWARD_PROC_SYMBOL(public_6f49bc0);
CLANG_FORWARD_PROC_SYMBOL(public_6f576c0);
CLANG_FORWARD_PROC_SYMBOL(public_6f66dc0);
CLANG_FORWARD_PROC_SYMBOL(public_6f66ec0);
CLANG_FORWARD_PROC_SYMBOL(public_6f671a0);

#define public_6f66efb _public_6f66efb
#define public_6f66f13 _public_6f66f13
#define public_6f66f5d _public_6f66f5d
#define public_6f66f79 _public_6f66f79
#define public_6f66f84 _public_6f66f84
#define public_6f66f91 _public_6f66f91
#define public_6f66fc0 _public_6f66fc0
#define public_6f66fcb _public_6f66fcb
#define public_6f66fe1 _public_6f66fe1
#define public_6f66ff2 _public_6f66ff2
#define public_6f66ffd _public_6f66ffd
#define public_6f67013 _public_6f67013
#define public_6f67032 _public_6f67032
#define public_6f67041 _public_6f67041

PROC_DECLARE(0x6f66ec0, internal_6f66ec0, public_6f66ec0);
extern "C" NAKED register_t __cdecl internal_6f66ec0()
{
    __asm
    {
        push ecx
        push ebx
        mov ebx, dword ptr ss : [esp+0xC]
        mov eax, dword ptr ds : [ebx+8]
        test eax, eax
        push ebp
        push esi
        push edi
        je public_6f67041
        mov eax, dword ptr ds : [ebx+4]
        mov esi, dword ptr ds : [eax]
        mov ecx, dword ptr ds : [esi+8]
        cmp dword ptr ds : [ecx+0x154], 0xFFFFFFFF
        je public_6f66efb
        mov edx, dword ptr ds : [ecx]
        call dword ptr ds : [edx+4]
        test al, al
        je public_6f66efb
        mov eax, dword ptr ds : [esi+8]
        push ebx
        push eax
        call public_6f66dc0
        add esp, 8
        public_6f66efb : nop
        call public_6efeb00
        mov esi, dword ptr ss : [esp+0x1C]
        mov dword ptr ss : [esp+0x10], eax
        mov eax, dword ptr ds : [ebx+4]
        mov edi, dword ptr ds : [eax]
        xor ebp, ebp
        cmp edi, eax
        je public_6f66f84
        public_6f66f13 : nop
        mov ecx, dword ptr ds : [edi+8]
        mov edx, dword ptr ds : [ecx+4]
        lea eax, ss:[esp+0x1C]
        push eax
        mov dword ptr ss : [esp+0x20], edx
        call public_6f49bc0
        add esp, 4
        test eax, eax
        jne public_6f66f79
        push ebp
        mov ecx, esi
        call public_6efccd0
        test al, al
        jne public_6f66f79
        mov al, byte ptr ss : [esp+0x20]
        test al, al
        je public_6f66f5d
        mov eax, dword ptr ds : [edi+8]
        mov ecx, dword ptr ds : [eax+0x14C]
        test ecx, ecx
        jne public_6f66f5d
        mov ecx, dword ptr ss : [esp+0x18]
        push ecx
        push eax
        call public_6f66dc0
        add esp, 8
        public_6f66f5d : nop
        mov edx, dword ptr ss : [esp+0x10]
        mov ecx, dword ptr ds : [edi+8]
        push esi
        push ebp
        push edx
        call public_6f576c0
        mov eax, dword ptr ds : [edi+8]
        push eax
        inc ebp
        call public_6f671a0
        add esp, 4
        public_6f66f79 : nop
        mov ebx, dword ptr ss : [esp+0x18]
        mov edi, dword ptr ds : [edi]
        cmp edi, dword ptr ds : [ebx+4]
        jne public_6f66f13
        public_6f66f84 : nop
        mov eax, dword ptr ds : [ebx+4]
        mov edi, dword ptr ds : [eax]
        cmp edi, eax
        je public_6f67041
        public_6f66f91 : nop
        mov ecx, dword ptr ds : [edi+8]
        mov edx, dword ptr ds : [ecx+4]
        lea eax, ss:[esp+0x20]
        push eax
        mov dword ptr ss : [esp+0x24], edx
        call public_6f49bc0
        add esp, 4
        test eax, eax
        je public_6f67032
        push ebp
        mov ecx, esi
        call public_6efccd0
        test al, al
        jne public_6f66ff2
        lea esp, ss:[esp]
        public_6f66fc0 : nop
        mov eax, dword ptr ds : [esi+0x38]
        test eax, eax
        jne public_6f66fcb
        xor edx, edx
        jmp public_6f66fe1
        public_6f66fcb : nop
        mov ecx, dword ptr ds : [esi+0x3C]
        sub ecx, eax
        mov eax, 0x4EC4EC4F
        imul ecx
        sar edx, 4
        mov ecx, edx
        shr ecx, 0x1F
        add edx, ecx
        public_6f66fe1 : nop
        cmp ebp, edx
        jge public_6f66ff2
        inc ebp
        push ebp
        mov ecx, esi
        call public_6efccd0
        test al, al
        je public_6f66fc0
        public_6f66ff2 : nop
        mov eax, dword ptr ds : [esi+0x38]
        test eax, eax
        jne public_6f66ffd
        xor edx, edx
        jmp public_6f67013
        public_6f66ffd : nop
        mov ecx, dword ptr ds : [esi+0x3C]
        sub ecx, eax
        mov eax, 0x4EC4EC4F
        imul ecx
        sar edx, 4
        mov eax, edx
        shr eax, 0x1F
        add edx, eax
        public_6f67013 : nop
        cmp ebp, edx
        jge public_6f67032
        mov ecx, dword ptr ss : [esp+0x10]
        push esi
        push ebp
        push ecx
        mov ecx, dword ptr ds : [edi+8]
        call public_6f576c0
        mov edx, dword ptr ds : [edi+8]
        push edx
        call public_6f671a0
        add esp, 4
        public_6f67032 : nop
        mov eax, dword ptr ss : [esp+0x18]
        mov edi, dword ptr ds : [edi]
        cmp edi, dword ptr ds : [eax+4]
        jne public_6f66f91
        public_6f67041 : nop
        pop edi
        pop esi
        pop ebp
        pop ebx
        pop ecx
        ret 
        UNREACHABLE_TRAP(0x6f66ec0)
    }
}

#undef public_6f66efb
#undef public_6f66f13
#undef public_6f66f5d
#undef public_6f66f79
#undef public_6f66f84
#undef public_6f66f91
#undef public_6f66fc0
#undef public_6f66fcb
#undef public_6f66fe1
#undef public_6f66ff2
#undef public_6f66ffd
#undef public_6f67013
#undef public_6f67032
#undef public_6f67041
