#include "Server-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ce3ac0);
CLANG_FORWARD_PROC_SYMBOL(public_6d29020);
CLANG_FORWARD_PROC_SYMBOL(public_6d5ffb0);

#define public_6d2903c _public_6d2903c
#define public_6d2904b _public_6d2904b
#define public_6d2905e _public_6d2905e
#define public_6d29098 _public_6d29098
#define public_6d290a5 _public_6d290a5
#define public_6d290bb _public_6d290bb
#define public_6d290db _public_6d290db
#define public_6d290e7 _public_6d290e7
#define public_6d290fc _public_6d290fc
#define public_6d29110 _public_6d29110
#define public_6d2912c _public_6d2912c
#define public_6d29135 _public_6d29135
#define public_6d29144 _public_6d29144
#define public_6d29150 _public_6d29150

PROC_DECLARE(0x6d29020, internal_6d29020, public_6d29020);
extern "C" NAKED register_t __cdecl internal_6d29020()
{
    __asm
    {
        mov eax, dword ptr ds : [public_6d64b64]
        push ebx
        mov ebx, dword ptr ss : [esp+8]
        push ebp
        mov ebp, dword ptr ds : [eax]
        mov eax, dword ptr ds : [ebx+8]
        push esi
        push edi
        mov edi, eax
        cmp ebp, edi
        mov esi, ecx
        jae public_6d2903c
        mov edi, ebp
        public_6d2903c : nop
        cmp esi, ebx
        jne public_6d290a5
        cmp dword ptr ds : [esi+8], edi
        jae public_6d2904b
        call dword ptr ds : [public_6d64b04]
        public_6d2904b : nop
        mov ecx, esi
        call dword ptr ds : [public_6d64acc]
        mov eax, dword ptr ds : [esi+8]
        sub eax, edi
        cmp eax, ebp
        jae public_6d2905e
        mov ebp, eax
        public_6d2905e : nop
        test ebp, ebp
        jbe public_6d29098
        mov ecx, dword ptr ds : [esi+4]
        sub eax, ebp
        push eax
        lea edx, ds:[edi+ebp]
        lea eax, ds:[ecx+edx*2]
        push eax
        lea ecx, ds:[ecx+edi*2]
        push ecx
        call public_6ce3ac0
        mov edi, dword ptr ds : [esi+8]
        add esp, 0xC
        push 0
        sub edi, ebp
        push edi
        mov ecx, esi
        call dword ptr ds : [public_6d64b5c]
        test al, al
        je public_6d29098
        push edi
        mov ecx, esi
        call dword ptr ds : [public_6d64b60]
        public_6d29098 : nop
        mov ecx, esi
        call dword ptr ds : [public_6d64acc]
        jmp public_6d29150
        public_6d290a5 : nop
        xor ebp, ebp
        cmp edi, ebp
        jbe public_6d29110
        cmp edi, eax
        jne public_6d29110
        mov eax, dword ptr ds : [ebx+4]
        cmp eax, ebp
        jne public_6d290bb
        mov eax, dword ptr ds : [public_6d64b54]
        public_6d290bb : nop
        cmp byte ptr ds : [eax-1], 0xFE
        jae public_6d29110
        mov eax, dword ptr ds : [esi+4]
        cmp eax, ebp
        je public_6d290e7
        mov cl, byte ptr ds : [eax-1]
        test cl, cl
        je public_6d290db
        cmp cl, 0xFF
        je public_6d290db
        dec cl
        mov byte ptr ds : [eax-1], cl
        jmp public_6d290e7
        public_6d290db : nop
        add eax, 0xFFFFFFFE
        push eax
        call public_6d5ffb0
        add esp, 4
        public_6d290e7 : nop
        mov dword ptr ds : [esi+4], ebp
        mov dword ptr ds : [esi+8], ebp
        mov dword ptr ds : [esi+0xC], ebp
        mov eax, dword ptr ds : [ebx+4]
        cmp eax, ebp
        jne public_6d290fc
        mov eax, dword ptr ds : [public_6d64b54]
        public_6d290fc : nop
        mov dword ptr ds : [esi+4], eax
        mov edx, dword ptr ds : [ebx+8]
        mov dword ptr ds : [esi+8], edx
        mov ecx, dword ptr ds : [ebx+0xC]
        mov dword ptr ds : [esi+0xC], ecx
        inc byte ptr ds : [eax-1]
        jmp public_6d29150
        public_6d29110 : nop
        push 1
        push edi
        mov ecx, esi
        call dword ptr ds : [public_6d64b5c]
        test al, al
        je public_6d29150
        mov ecx, dword ptr ds : [ebx+4]
        test ecx, ecx
        jne public_6d2912c
        mov ecx, dword ptr ds : [public_6d64b54]
        public_6d2912c : nop
        test edi, edi
        mov eax, dword ptr ds : [esi+4]
        jbe public_6d29144
        mov edx, edi
        public_6d29135 : nop
        mov bp, word ptr ds : [ecx]
        mov word ptr ds : [eax], bp
        add eax, 2
        add ecx, 2
        dec edx
        jne public_6d29135
        public_6d29144 : nop
        mov edx, dword ptr ds : [esi+4]
        mov dword ptr ds : [esi+8], edi
        mov word ptr ds : [edx+edi*2], 0
        public_6d29150 : nop
        mov eax, dword ptr ds : [ebx+0x10]
        mov dword ptr ds : [esi+0x10], eax
        mov ecx, dword ptr ds : [ebx+0x14]
        pop edi
        mov dword ptr ds : [esi+0x14], ecx
        mov eax, esi
        pop esi
        pop ebp
        pop ebx
        ret 4
        UNREACHABLE_TRAP(0x6d29020)
    }
}

#undef public_6d2903c
#undef public_6d2904b
#undef public_6d2905e
#undef public_6d29098
#undef public_6d290a5
#undef public_6d290bb
#undef public_6d290db
#undef public_6d290e7
#undef public_6d290fc
#undef public_6d29110
#undef public_6d2912c
#undef public_6d29135
#undef public_6d29144
#undef public_6d29150
