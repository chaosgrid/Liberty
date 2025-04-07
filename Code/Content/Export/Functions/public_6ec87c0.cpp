#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6eb8ef0);
CLANG_FORWARD_PROC_SYMBOL(public_6ed23d0);

#define public_6ec8805 _public_6ec8805
#define public_6ec8820 _public_6ec8820
#define public_6ec8840 _public_6ec8840
#define public_6ec8871 _public_6ec8871
#define public_6ec887b _public_6ec887b
#define public_6ec88b3 _public_6ec88b3
#define public_6ec88b9 _public_6ec88b9
#define public_6ec88e4 _public_6ec88e4
#define public_6ec891d _public_6ec891d
#define public_6ec8936 _public_6ec8936
#define public_6ec894c _public_6ec894c
#define public_6ec894e _public_6ec894e
#define public_6ec8970 _public_6ec8970
#define public_6ec8983 _public_6ec8983

PROC_DECLARE(0x6ec87c0, internal_6ec87c0, public_6ec87c0);
extern "C" NAKED register_t __cdecl internal_6ec87c0()
{
    __asm
    {
        push ebx
        push ebp
        mov ebp, dword ptr ss : [esp+0xC]
        push esi
        push edi
        mov edi, dword ptr ds : [public_6fb3048]
        mov ebx, ecx
        push 0
        mov ecx, ebp
        call edi
        push eax
        lea eax, ds:[ebx+0x74]
        push eax
        call dword ptr ds : [public_6fb33b4]
        add esp, 8
        push 1
        mov ecx, ebp
        call dword ptr ds : [public_6fb3020]
        push 2
        mov ecx, ebp
        mov dword ptr ds : [ebx+0x78], eax
        call edi
        mov esi, eax
        test esi, esi
        jne public_6ec8805
        mov dword ptr ds : [ebx+0xC], eax
        mov byte ptr ds : [ebx+0x10], al
        jmp public_6ec8840
        public_6ec8805 : nop
        or ecx, 0xFFFFFFFF
        xor eax, eax
        mov edi, esi
        repne scasb
        not ecx
        dec ecx
        mov eax, ecx
        cmp eax, 0x30
        lea edx, ds:[ebx+0x10]
        jb public_6ec8820
        mov eax, 0x2F
        public_6ec8820 : nop
        mov ecx, eax
        mov edi, edx
        mov edx, ecx
        shr ecx, 2
        rep movsd
        mov ecx, edx
        and ecx, 3
        rep movsb
        mov edi, dword ptr ds : [public_6fb3048]
        mov byte ptr ds : [eax+ebx+0x10], 0
        mov dword ptr ds : [ebx+0xC], eax
        public_6ec8840 : nop
        push 3
        mov ecx, ebp
        call edi
        push eax
        call dword ptr ds : [public_6fb3684]
        add esp, 4
        push 4
        mov ecx, ebp
        mov dword ptr ds : [ebx+0x7C], eax
        call dword ptr ds : [public_6fb3020]
        cmp eax, 0xFFFFFFFF
        mov dword ptr ds : [ebx+0x80], eax
        jl public_6ec8871
        test eax, eax
        je public_6ec8871
        cmp eax, 0xA
        jle public_6ec887b
        public_6ec8871 : nop
        mov dword ptr ds : [ebx+0x80], 0xFFFFFFFF
/*FIXUP public_6ec887b : nop
        push offset public_6fb5aa8 @0x6ec887b*/
  FIXUP public_6ec887b : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fb5aa8
        push 5
        mov ecx, ebp
        call edi
        push eax
        call dword ptr ds : [public_6fb3294]
        mov edi, dword ptr ds : [public_6fb33b0]
        add esp, 8
        test eax, eax
        lea esi, ds:[ebx+0x40]
        je public_6ec88b3
        push 1
        push 5
        mov ecx, ebp
        call dword ptr ds : [public_6fb3048]
        push eax
        call edi
        add esp, 8
        mov dword ptr ds : [esi], eax
        jmp public_6ec88b9
        public_6ec88b3 : nop
        mov dword ptr ds : [esi], 0
        public_6ec88b9 : nop
        push 0
        push 6
        mov ecx, ebp
        call dword ptr ds : [public_6fb3048]
        push eax
        call edi
        add esp, 8
        push 7
        mov ecx, ebp
        mov dword ptr ds : [ebx+0x44], eax
        mov dword ptr ss : [esp+0x18], 7
        call dword ptr ds : [public_6fb306c]
        test al, al
        jne public_6ec891d
        public_6ec88e4 : nop
        mov edi, dword ptr ss : [esp+0x14]
        mov eax, edi
        inc edi
        push eax
        mov ecx, ebp
        mov dword ptr ss : [esp+0x18], edi
        call dword ptr ds : [public_6fb3048]
        push eax
        call dword ptr ds : [public_6fb33ac]
        mov ecx, dword ptr ds : [esi+0x30]
        mov dword ptr ds : [esi+ecx*4+0x10], eax
        mov eax, dword ptr ds : [esi+0x30]
        add esp, 4
        inc eax
        push edi
        mov ecx, ebp
        mov dword ptr ds : [esi+0x30], eax
        call dword ptr ds : [public_6fb306c]
        test al, al
        je public_6ec88e4
        public_6ec891d : nop
        mov ebx, dword ptr ds : [ebx+4]
        mov edi, dword ptr ds : [ebx+0x320]
        mov eax, dword ptr ds : [ebx+0x324]
        add ebx, 0x31C
        cmp edi, eax
        je public_6ec894c
        public_6ec8936 : nop
        push esi
        mov ecx, edi
        call public_6eb8ef0
        test al, al
        jne public_6ec894e
        mov eax, dword ptr ds : [ebx+8]
        add edi, 0x34
        cmp edi, eax
        jne public_6ec8936
        public_6ec894c : nop
        mov edi, eax
        public_6ec894e : nop
        mov ecx, dword ptr ds : [ebx+8]
        cmp edi, ecx
        jne public_6ec8983
        push esi
        push 1
        push ecx
        mov ecx, ebx
        call public_6ed23d0
        mov edi, dword ptr ds : [ebx+4]
        mov ebx, dword ptr ds : [ebx+8]
        cmp edi, ebx
        je public_6ec8983
        lea ebx, ds:[ebx]
        public_6ec8970 : nop
        push esi
        mov ecx, edi
        call public_6eb8ef0
        test al, al
        jne public_6ec8983
        add edi, 0x34
        cmp edi, ebx
        jne public_6ec8970
        public_6ec8983 : nop
        pop edi
        pop esi
        pop ebp
        pop ebx
        ret 4
        UNREACHABLE_TRAP(0x6ec87c0)
    }
}

#undef public_6ec8805
#undef public_6ec8820
#undef public_6ec8840
#undef public_6ec8871
#undef public_6ec887b
#undef public_6ec88b3
#undef public_6ec88b9
#undef public_6ec88e4
#undef public_6ec891d
#undef public_6ec8936
#undef public_6ec894c
#undef public_6ec894e
#undef public_6ec8970
#undef public_6ec8983
