#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6eb6560);
CLANG_FORWARD_PROC_SYMBOL(public_6eb6b30);
CLANG_FORWARD_PROC_SYMBOL(public_6eed270);
CLANG_FORWARD_PROC_SYMBOL(public_6f68ac0);
CLANG_FORWARD_PROC_SYMBOL(public_6f6a640);
CLANG_FORWARD_PROC_SYMBOL(public_6f7e260);
CLANG_FORWARD_PROC_SYMBOL(public_6f7ec90);
CLANG_FORWARD_PROC_SYMBOL(public_6fa3db0);
CLANG_FORWARD_PROC_SYMBOL(public_6fa8fe0);
CLANG_FORWARD_PROC_SYMBOL(public_6fa912a);

#define public_6f7e2c9 _public_6f7e2c9
#define public_6f7e2d1 _public_6f7e2d1
#define public_6f7e2dc _public_6f7e2dc
#define public_6f7e2e4 _public_6f7e2e4
#define public_6f7e2f3 _public_6f7e2f3
#define public_6f7e301 _public_6f7e301
#define public_6f7e315 _public_6f7e315
#define public_6f7e328 _public_6f7e328
#define public_6f7e332 _public_6f7e332
#define public_6f7e33e _public_6f7e33e
#define public_6f7e38a _public_6f7e38a
#define public_6f7e3a0 _public_6f7e3a0
#define public_6f7e3c2 _public_6f7e3c2
#define public_6f7e3c5 _public_6f7e3c5
#define public_6f7e3cd _public_6f7e3cd

PROC_DECLARE(0x6f7e260, internal_6f7e260, public_6f7e260);
extern "C" NAKED register_t __cdecl internal_6f7e260()
{
    __asm
    {
        sub esp, 8
        push ebx
        push ebp
        mov ebp, dword ptr ss : [esp+0x14]
        push esi
        push edi
        mov ebx, ecx
        push ebp
        mov dword ptr ss : [esp+0x14], ebx
        call public_6f68ac0
        lea eax, ss:[ebp+0x10]
        mov edx, dword ptr ds : [eax]
        lea ecx, ds:[ebx+0x10]
        mov dword ptr ds : [ecx], edx
        mov edx, dword ptr ds : [eax+4]
        mov dword ptr ds : [ecx+4], edx
        mov eax, dword ptr ds : [eax+8]
        mov dword ptr ds : [ecx+8], eax
        lea ecx, ss:[ebp+0x1C]
        mov eax, dword ptr ds : [ecx]
        lea edx, ds:[ebx+0x1C]
        mov dword ptr ds : [edx], eax
        mov eax, dword ptr ds : [ecx+4]
        mov dword ptr ds : [edx+4], eax
        mov ecx, dword ptr ds : [ecx+8]
        mov dword ptr ds : [edx+8], ecx
        lea esi, ss:[ebp+0x28]
        lea edi, ds:[ebx+0x28]
        mov ecx, 0xC
        rep movsd
        lea edi, ss:[ebp+0x58]
        lea esi, ds:[ebx+0x58]
        cmp esi, edi
        je public_6f7e3cd
        mov ebx, dword ptr ds : [edi+4]
        test ebx, ebx
        jne public_6f7e2c9
        xor ecx, ecx
        jmp public_6f7e2d1
        public_6f7e2c9 : nop
        mov ecx, dword ptr ds : [edi+8]
        sub ecx, ebx
        sar ecx, 2
        public_6f7e2d1 : nop
        mov ebp, dword ptr ds : [esi+4]
        test ebp, ebp
        jne public_6f7e2dc
        xor eax, eax
        jmp public_6f7e2e4
        public_6f7e2dc : nop
        mov eax, dword ptr ds : [esi+8]
        sub eax, ebp
        sar eax, 2
        public_6f7e2e4 : nop
        cmp ecx, eax
        ja public_6f7e328
        mov edx, dword ptr ds : [edi+8]
        mov eax, ebx
        cmp eax, edx
        mov ecx, ebp
        je public_6f7e301
        public_6f7e2f3 : nop
        mov ebx, dword ptr ds : [eax]
        mov dword ptr ds : [ecx], ebx
        add eax, 4
        add ecx, 4
        cmp eax, edx
        jne public_6f7e2f3
        public_6f7e301 : nop
        mov eax, dword ptr ds : [edi+4]
        test eax, eax
        jne public_6f7e315
        mov edx, dword ptr ds : [esi+4]
        xor edi, edi
        lea eax, ds:[edx+edi*4]
        jmp public_6f7e3c2
        public_6f7e315 : nop
        mov edi, dword ptr ds : [edi+8]
        mov edx, dword ptr ds : [esi+4]
        sub edi, eax
        sar edi, 2
        lea eax, ds:[edx+edi*4]
        jmp public_6f7e3c2
        public_6f7e328 : nop
        test ebx, ebx
        jne public_6f7e332
        mov dword ptr ss : [esp+0x14], ebx
        jmp public_6f7e33e
        public_6f7e332 : nop
        mov eax, dword ptr ds : [edi+8]
        sub eax, ebx
        sar eax, 2
        mov dword ptr ss : [esp+0x14], eax
        public_6f7e33e : nop
        mov ecx, esi
        call public_6eb6b30
        cmp dword ptr ss : [esp+0x14], eax
        ja public_6f7e38a
        mov ecx, esi
        call public_6fa3db0
        lea eax, ds:[ebx+eax*4]
        push ebp
        push eax
        push ebx
        mov dword ptr ss : [esp+0x20], eax
        call public_6f6a640
        mov ecx, dword ptr ds : [esi+8]
        mov edx, dword ptr ds : [edi+8]
        mov eax, dword ptr ss : [esp+0x20]
        add esp, 0xC
        push ecx
        push edx
        push eax
        mov ecx, esi
        call public_6eed270
        mov ecx, edi
        call public_6fa3db0
        mov ecx, dword ptr ds : [esi+4]
        lea edx, ds:[ecx+eax*4]
        mov dword ptr ds : [esi+8], edx
        jmp public_6f7e3c5
        public_6f7e38a : nop
        push ebp
        call public_6fa8fe0
        add esp, 4
        mov ecx, edi
        call public_6fa3db0
        test eax, eax
        jge public_6f7e3a0
        xor eax, eax
        public_6f7e3a0 : nop
        shl eax, 2
        push eax
        call public_6fa912a
        add esp, 4
        mov dword ptr ds : [esi+4], eax
        mov ecx, dword ptr ds : [edi+8]
        mov edi, dword ptr ds : [edi+4]
        push eax
        push ecx
        push edi
        mov ecx, esi
        call public_6eed270
        mov dword ptr ds : [esi+0xC], eax
        public_6f7e3c2 : nop
        mov dword ptr ds : [esi+8], eax
        public_6f7e3c5 : nop
        mov ebp, dword ptr ss : [esp+0x1C]
        mov ebx, dword ptr ss : [esp+0x10]
        public_6f7e3cd : nop
        lea ecx, ss:[ebp+0x68]
        push ecx
        lea ecx, ds:[ebx+0x68]
        call public_6eb6560
        mov edx, dword ptr ss : [ebp+0x78]
        mov dword ptr ds : [ebx+0x78], edx
        mov eax, dword ptr ss : [ebp+0x7C]
        mov dword ptr ds : [ebx+0x7C], eax
        mov ecx, dword ptr ss : [ebp+0x80]
        mov dword ptr ds : [ebx+0x80], ecx
        mov edx, dword ptr ss : [ebp+0x84]
        add ebp, 0x88
        push ebp
        lea ecx, ds:[ebx+0x88]
        mov dword ptr ds : [ebx+0x84], edx
        call public_6f7ec90
        pop edi
        pop esi
        pop ebp
        mov eax, ebx
        pop ebx
        add esp, 8
        ret 4
        UNREACHABLE_TRAP(0x6f7e260)
    }
}

#undef public_6f7e2c9
#undef public_6f7e2d1
#undef public_6f7e2dc
#undef public_6f7e2e4
#undef public_6f7e2f3
#undef public_6f7e301
#undef public_6f7e315
#undef public_6f7e328
#undef public_6f7e332
#undef public_6f7e33e
#undef public_6f7e38a
#undef public_6f7e3a0
#undef public_6f7e3c2
#undef public_6f7e3c5
#undef public_6f7e3cd
