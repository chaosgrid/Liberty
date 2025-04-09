#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_4cdc60);

#define public_4cdcb2 _public_4cdcb2
#define public_4cdcc6 _public_4cdcc6
#define public_4cdce0 _public_4cdce0
#define public_4cdd40 _public_4cdd40
#define public_4cdda0 _public_4cdda0
#define public_4cddb0 _public_4cddb0
#define public_4cddc8 _public_4cddc8
#define public_4cde2d _public_4cde2d
#define public_4cde3c _public_4cde3c

PROC_DECLARE(0x4cdc60, internal_4cdc60, public_4cdc60);
extern "C" NAKED register_t __cdecl internal_4cdc60()
{
    __asm
    {
        push ecx
        cmp dword ptr ds : [ecx], 0
        mov dword ptr ss : [esp], ecx
        jbe public_4cde3c
        mov eax, dword ptr ds : [ecx+4]
        push ebx
        push ebp
        lea edx, ds:[ecx+4]
        push esi
        mov esi, dword ptr ss : [esp+0x14]
        mov dword ptr ds : [esi], eax
        mov eax, dword ptr ds : [edx+4]
        mov dword ptr ds : [esi+4], eax
        mov ebx, dword ptr ds : [edx+8]
        lea eax, ds:[esi+8]
        push edi
        lea edi, ds:[edx+8]
        mov dword ptr ds : [eax], ebx
        mov ebx, dword ptr ds : [edi+4]
        mov dword ptr ds : [eax+4], ebx
        mov ebx, dword ptr ds : [edi+8]
        mov dword ptr ds : [eax+8], ebx
        mov ebx, dword ptr ds : [edi+0xC]
        mov dword ptr ds : [eax+0xC], ebx
        mov ebx, dword ptr ds : [edi+0x30]
        xor ebp, ebp
        test ebx, ebx
        mov dword ptr ds : [eax+0x30], ebx
        jle public_4cdcc6
        lea ebx, ds:[eax+0x10]
        sub edi, eax
        public_4cdcb2 : nop
        mov ecx, dword ptr ds : [edi+ebx]
        mov dword ptr ds : [ebx], ecx
        mov ecx, dword ptr ds : [eax+0x30]
        inc ebp
        add ebx, 4
        cmp ebp, ecx
        jl public_4cdcb2
        mov ecx, dword ptr ss : [esp+0x10]
        public_4cdcc6 : nop
        mov eax, dword ptr ds : [edx+0x3C]
        mov dword ptr ds : [esi+0x3C], eax
        mov eax, dword ptr ds : [edx+0x40]
        mov edi, edx
        mov dword ptr ds : [esi+0x40], eax
        lea eax, ds:[esi+0x44]
        sub edi, esi
        mov ebx, 0x10
        mov edi, edi
        public_4cdce0 : nop
        mov ebp, dword ptr ds : [edi+eax]
        mov dword ptr ds : [eax], ebp
        add eax, 4
        dec ebx
        jne public_4cdce0
        mov eax, dword ptr ds : [edx+0x84]
        mov dword ptr ds : [esi+0x84], eax
        mov eax, dword ptr ds : [edx+0x88]
        mov dword ptr ds : [esi+0x88], eax
        mov eax, dword ptr ds : [edx+0x8C]
        mov dword ptr ds : [esi+0x8C], eax
        mov eax, dword ptr ds : [edx+0x90]
        mov dword ptr ds : [esi+0x90], eax
        mov edx, dword ptr ds : [edx+0x94]
        mov dword ptr ds : [esi+0x94], edx
        cmp dword ptr ds : [ecx], 1
        mov dword ptr ss : [esp+0x18], 1
        jbe public_4cde2d
        lea eax, ds:[ecx+0x10]
        nop 
        lea esp, ss:[esp]
        public_4cdd40 : nop
        mov ecx, dword ptr ds : [eax+0x8C]
        mov dword ptr ds : [eax-0xC], ecx
        mov ecx, dword ptr ds : [eax+0x90]
        mov dword ptr ds : [eax-8], ecx
        mov edi, dword ptr ds : [eax+0x94]
        lea esi, ds:[eax+0x8C]
        lea edx, ds:[eax-0xC]
        lea ebp, ds:[eax+0x94]
        mov dword ptr ds : [eax-4], edi
        mov edi, dword ptr ds : [eax+0x98]
        lea ecx, ds:[eax-4]
        mov dword ptr ds : [eax], edi
        mov edi, dword ptr ds : [eax+0x9C]
        mov dword ptr ds : [eax+4], edi
        mov edi, dword ptr ds : [eax+0xA0]
        mov dword ptr ds : [eax+8], edi
        mov edi, dword ptr ds : [eax+0xC4]
        xor ebx, ebx
        test edi, edi
        mov dword ptr ds : [eax+0x2C], edi
        jle public_4cddb0
        lea edi, ds:[eax+0xC]
        sub ebp, ecx
        nop 
        lea esp, ss:[esp]
        public_4cdda0 : nop
        mov ecx, dword ptr ds : [edi+ebp]
        mov dword ptr ds : [edi], ecx
        mov ecx, dword ptr ds : [eax+0x2C]
        inc ebx
        add edi, 4
        cmp ebx, ecx
        jl public_4cdda0
        public_4cddb0 : nop
        mov ecx, dword ptr ds : [esi+0x3C]
        mov dword ptr ds : [edx+0x3C], ecx
        mov ecx, dword ptr ds : [esi+0x40]
        mov dword ptr ds : [edx+0x40], ecx
        mov ecx, esi
        lea edi, ds:[edx+0x44]
        sub ecx, edx
        mov ebx, 0x10
        public_4cddc8 : nop
        mov ebp, dword ptr ds : [ecx+edi]
        mov dword ptr ds : [edi], ebp
        add edi, 4
        dec ebx
        jne public_4cddc8
        mov ecx, dword ptr ds : [esi+0x84]
        mov dword ptr ds : [edx+0x84], ecx
        mov ecx, dword ptr ds : [esi+0x88]
        mov dword ptr ds : [edx+0x88], ecx
        mov ecx, dword ptr ds : [esi+0x8C]
        mov dword ptr ds : [edx+0x8C], ecx
        mov ecx, dword ptr ds : [esi+0x90]
        mov dword ptr ds : [edx+0x90], ecx
        mov ecx, dword ptr ds : [esi+0x94]
        mov dword ptr ds : [edx+0x94], ecx
        mov ecx, dword ptr ss : [esp+0x18]
        mov edx, dword ptr ss : [esp+0x10]
        mov esi, dword ptr ds : [edx]
        inc ecx
        add eax, 0x98
        cmp ecx, esi
        mov dword ptr ss : [esp+0x18], ecx
        jb public_4cdd40
        mov ecx, edx
        public_4cde2d : nop
        mov eax, dword ptr ds : [ecx]
        pop edi
        pop esi
        dec eax
        pop ebp
        mov dword ptr ds : [ecx], eax
        mov al, 1
        pop ebx
        pop ecx
        ret 4
        public_4cde3c : nop
        xor al, al
        pop ecx
        ret 4
        UNREACHABLE_TRAP(0x4cdc60)
    }
}

#undef public_4cdcb2
#undef public_4cdcc6
#undef public_4cdce0
#undef public_4cdd40
#undef public_4cdda0
#undef public_4cddb0
#undef public_4cddc8
#undef public_4cde2d
#undef public_4cde3c
