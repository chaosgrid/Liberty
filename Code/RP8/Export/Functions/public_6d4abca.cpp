#include "RP8-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d4abca);

#define public_6d4abf3 _public_6d4abf3
#define public_6d4ac0a _public_6d4ac0a
#define public_6d4ac48 _public_6d4ac48
#define public_6d4ac72 _public_6d4ac72
#define public_6d4ac77 _public_6d4ac77
#define public_6d4ac88 _public_6d4ac88
#define public_6d4ac9b _public_6d4ac9b
#define public_6d4aca3 _public_6d4aca3
#define public_6d4acc7 _public_6d4acc7
#define public_6d4acca _public_6d4acca
#define public_6d4acfc _public_6d4acfc
#define public_6d4ad19 _public_6d4ad19
#define public_6d4ad3d _public_6d4ad3d
#define public_6d4ad52 _public_6d4ad52
#define public_6d4ad67 _public_6d4ad67

PROC_DECLARE(0x6d4abca, internal_6d4abca, public_6d4abca);
extern "C" NAKED register_t __cdecl internal_6d4abca()
{
    __asm
    {
        push ebp
        mov ebp, esp
        sub esp, 0x51C
        push ebx
        push esi
        mov esi, dword ptr ss : [ebp+0x10]
        cmp dword ptr ds : [esi], 0
        push edi
        jne public_6d4abf3
        mov eax, dword ptr ss : [ebp+8]
        mov ecx, dword ptr ds : [eax+4]
        push 0x5D4
        push 1
        push eax
        call dword ptr ds : [ecx]
        add esp, 0xC
        mov dword ptr ds : [esi], eax
        public_6d4abf3 : nop
        mov esi, dword ptr ds : [esi]
        mov ebx, dword ptr ss : [ebp+0xC]
        xor eax, eax
        mov dword ptr ds : [esi+0xD0], ebx
        mov dword ptr ss : [ebp-4], eax
        mov dword ptr ss : [ebp+0x10], 1
        public_6d4ac0a : nop
        mov ecx, dword ptr ss : [ebp+0x10]
        movzx ecx, byte ptr ds : [ecx+ebx]
        cmp ecx, 1
        mov dword ptr ss : [ebp-8], ecx
        jl public_6d4ac48
        lea edi, ss:[ebp+eax-0x118]
        mov al, byte ptr ss : [ebp+0x10]
        mov bl, al
        mov bh, bl
        mov edx, ecx
        shr ecx, 2
        mov eax, ebx
        shl eax, 0x10
        mov ax, bx
        mov ebx, dword ptr ss : [ebp+0xC]
        rep stosd
        mov ecx, edx
        and ecx, 3
        rep stosb
        mov eax, dword ptr ss : [ebp-4]
        add eax, edx
        mov dword ptr ss : [ebp-4], eax
        public_6d4ac48 : nop
        inc dword ptr ss : [ebp+0x10]
        cmp dword ptr ss : [ebp+0x10], 0x10
        jle public_6d4ac0a
        and byte ptr ss : [ebp+eax-0x118], 0
        movsx edi, byte ptr ss : [ebp-0x118]
        xor ecx, ecx
        xor edx, edx
        cmp byte ptr ss : [ebp-0x118], cl
        je public_6d4ac9b
        lea eax, ss:[ebp-0x118]
        public_6d4ac72 : nop
        movsx eax, byte ptr ds : [eax]
        jmp public_6d4ac88
        public_6d4ac77 : nop
        movsx eax, byte ptr ss : [ebp+ecx-0x117]
        mov dword ptr ss : [ebp+ecx*4-0x51C], edx
        inc ecx
        inc edx
        public_6d4ac88 : nop
        cmp eax, edi
        je public_6d4ac77
        shl edx, 1
        lea eax, ss:[ebp+ecx-0x118]
        inc edi
        cmp byte ptr ds : [eax], 0
        jne public_6d4ac72
        public_6d4ac9b : nop
        xor edx, edx
        xor ecx, ecx
        inc edx
        lea eax, ds:[esi+0x48]
        public_6d4aca3 : nop
        cmp byte ptr ds : [edx+ebx], 0
        je public_6d4acc7
        mov edi, dword ptr ss : [ebp+ecx*4-0x51C]
        mov dword ptr ds : [eax+0x48], ecx
        mov dword ptr ds : [eax-0x44], edi
        movzx edi, byte ptr ds : [edx+ebx]
        add ecx, edi
        mov edi, dword ptr ss : [ebp+ecx*4-0x520]
        mov dword ptr ds : [eax], edi
        jmp public_6d4acca
        public_6d4acc7 : nop
        or dword ptr ds : [eax], 0xFFFFFFFF
        public_6d4acca : nop
        inc edx
        add eax, 4
        cmp edx, 0x10
        jle public_6d4aca3
        xor eax, eax
        and dword ptr ss : [ebp-4], eax
        xor edx, edx
        mov ecx, 0x100
        lea edi, ds:[esi+0xD4]
        inc edx
        mov dword ptr ds : [esi+0x88], 0xFFFFF
        rep stosd
        mov dword ptr ss : [ebp+0x10], edx
        mov dword ptr ss : [ebp-0xC], 7
        public_6d4acfc : nop
        mov eax, dword ptr ss : [ebp+0x10]
        lea edi, ds:[eax+ebx]
        cmp byte ptr ds : [edi], 1
        mov dword ptr ss : [ebp-0x10], edx
        mov dword ptr ss : [ebp-0x14], edi
        jb public_6d4ad67
        mov ecx, dword ptr ss : [ebp-0xC]
        mov eax, dword ptr ss : [ebp-4]
        shl edx, cl
        lea ebx, ds:[eax+ebx+0x11]
        public_6d4ad19 : nop
        mov eax, dword ptr ss : [ebp-4]
        mov eax, dword ptr ss : [ebp+eax*4-0x51C]
        mov ecx, dword ptr ss : [ebp-0xC]
        shl eax, cl
        test edx, edx
        jle public_6d4ad52
        lea edi, ds:[eax+esi+0x4D4]
        lea eax, ds:[esi+eax*4+0xD4]
        mov dword ptr ss : [ebp-8], edx
        public_6d4ad3d : nop
        mov ecx, dword ptr ss : [ebp+0x10]
        mov dword ptr ds : [eax], ecx
        mov cl, byte ptr ds : [ebx]
        add eax, 4
        mov byte ptr ds : [edi], cl
        inc edi
        dec dword ptr ss : [ebp-8]
        jne public_6d4ad3d
        mov edi, dword ptr ss : [ebp-0x14]
        public_6d4ad52 : nop
        inc dword ptr ss : [ebp-0x10]
        movzx eax, byte ptr ds : [edi]
        inc dword ptr ss : [ebp-4]
        inc ebx
        cmp dword ptr ss : [ebp-0x10], eax
        jle public_6d4ad19
        mov ebx, dword ptr ss : [ebp+0xC]
        xor edx, edx
        inc edx
        public_6d4ad67 : nop
        inc dword ptr ss : [ebp+0x10]
        dec dword ptr ss : [ebp-0xC]
        jns public_6d4acfc
        pop edi
        pop esi
        pop ebx
        leave 
        ret 
        UNREACHABLE_TRAP(0x6d4abca)
    }
}

#undef public_6d4abf3
#undef public_6d4ac0a
#undef public_6d4ac48
#undef public_6d4ac72
#undef public_6d4ac77
#undef public_6d4ac88
#undef public_6d4ac9b
#undef public_6d4aca3
#undef public_6d4acc7
#undef public_6d4acca
#undef public_6d4acfc
#undef public_6d4ad19
#undef public_6d4ad3d
#undef public_6d4ad52
#undef public_6d4ad67
