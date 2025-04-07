#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f95ca0);
CLANG_FORWARD_PROC_SYMBOL(public_6f969c0);
CLANG_FORWARD_PROC_SYMBOL(public_6f96e80);
CLANG_FORWARD_PROC_SYMBOL(public_6f96f90);
CLANG_FORWARD_PROC_SYMBOL(public_6f971e0);
CLANG_FORWARD_PROC_SYMBOL(public_6fa8fe0);
CLANG_FORWARD_PROC_SYMBOL(public_6fa912a);

#define public_6f96a12 _public_6f96a12
#define public_6f96a14 _public_6f96a14
#define public_6f96a1c _public_6f96a1c
#define public_6f96a2f _public_6f96a2f
#define public_6f96a3c _public_6f96a3c
#define public_6f96a60 _public_6f96a60
#define public_6f96a78 _public_6f96a78
#define public_6f96a82 _public_6f96a82
#define public_6f96aa2 _public_6f96aa2
#define public_6f96aba _public_6f96aba
#define public_6f96ac0 _public_6f96ac0
#define public_6f96ad3 _public_6f96ad3
#define public_6f96ae0 _public_6f96ae0
#define public_6f96aee _public_6f96aee
#define public_6f96b2a _public_6f96b2a
#define public_6f96b57 _public_6f96b57
#define public_6f96b91 _public_6f96b91
#define public_6f96b95 _public_6f96b95
#define public_6f96bac _public_6f96bac
#define public_6f96bd0 _public_6f96bd0
#define public_6f96be0 _public_6f96be0
#define public_6f96bf0 _public_6f96bf0
#define public_6f96bff _public_6f96bff
#define public_6f96c15 _public_6f96c15
#define public_6f96c30 _public_6f96c30
#define public_6f96c54 _public_6f96c54
#define public_6f96c60 _public_6f96c60
#define public_6f96ca3 _public_6f96ca3
#define public_6f96cb5 _public_6f96cb5
#define public_6f96cfb _public_6f96cfb
#define public_6f96cfe _public_6f96cfe

PROC_DECLARE(0x6f969c0, internal_6f969c0, public_6f969c0);
extern "C" NAKED register_t __cdecl internal_6f969c0()
{
    __asm
    {
        sub esp, 0xC
        mov edx, dword ptr ds : [ecx+0xC]
        push ebx
        push ebp
        mov ebp, dword ptr ss : [esp+0x1C]
        push esi
        mov esi, dword ptr ds : [ecx+8]
        sub edx, esi
        mov eax, 0x4EC4EC4F
        imul edx
        sar edx, 4
        mov eax, edx
        shr eax, 0x1F
        add edx, eax
        cmp edx, ebp
        push edi
        mov dword ptr ss : [esp+0x10], ecx
        jae public_6f96b57
        mov ecx, dword ptr ds : [ecx+4]
        test ecx, ecx
        je public_6f96a12
        mov edx, esi
        sub edx, ecx
        mov eax, 0x4EC4EC4F
        imul edx
        sar edx, 4
        mov eax, edx
        shr eax, 0x1F
        add edx, eax
        cmp ebp, edx
        mov edi, edx
        jb public_6f96a14
        public_6f96a12 : nop
        mov edi, ebp
        public_6f96a14 : nop
        test ecx, ecx
        jne public_6f96a1c
        xor edx, edx
        jmp public_6f96a2f
        public_6f96a1c : nop
        sub esi, ecx
        mov eax, 0x4EC4EC4F
        imul esi
        sar edx, 4
        mov ecx, edx
        shr ecx, 0x1F
        add edx, ecx
        public_6f96a2f : nop
        lea eax, ds:[edx+edi]
        test eax, eax
        mov dword ptr ss : [esp+0x14], eax
        jge public_6f96a3c
        xor eax, eax
        public_6f96a3c : nop
        imul eax, 0x34
        push eax
        call public_6fa912a
        mov edi, dword ptr ss : [esp+0x14]
        mov esi, dword ptr ds : [edi+4]
        mov dword ptr ss : [esp+0x1C], eax
        mov ebx, eax
        mov eax, dword ptr ss : [esp+0x24]
        add esp, 4
        cmp esi, eax
        je public_6f96a78
        lea ecx, ds:[ecx]
        public_6f96a60 : nop
        push esi
        push ebx
        call public_6f96e80
        mov eax, dword ptr ss : [esp+0x28]
        add esi, 0x34
        add esp, 8
        add ebx, 0x34
        cmp esi, eax
        jne public_6f96a60
        public_6f96a78 : nop
        test ebp, ebp
        mov esi, ebx
        jbe public_6f96aa2
        mov dword ptr ss : [esp+0x24], ebp
        public_6f96a82 : nop
        mov edx, dword ptr ss : [esp+0x28]
        push edx
        push esi
        call public_6f96e80
        mov eax, dword ptr ss : [esp+0x2C]
        add esp, 8
        add esi, 0x34
        dec eax
        mov dword ptr ss : [esp+0x24], eax
        jne public_6f96a82
        mov eax, dword ptr ss : [esp+0x20]
        public_6f96aa2 : nop
        mov ecx, ebp
        imul ecx, 0x34
        add ecx, ebx
        mov ebx, dword ptr ds : [edi+8]
        cmp eax, ebx
        mov esi, eax
        je public_6f96ad3
        sub ecx, eax
        mov dword ptr ss : [esp+0x20], ecx
        jmp public_6f96ac0
        public_6f96aba : nop
        mov ecx, dword ptr ss : [esp+0x20]
        mov edi, edi
        public_6f96ac0 : nop
        add ecx, esi
        push esi
        push ecx
        call public_6f96e80
        add esi, 0x34
        add esp, 8
        cmp esi, ebx
        jne public_6f96aba
        public_6f96ad3 : nop
        mov ebx, dword ptr ds : [edi+8]
        mov esi, dword ptr ds : [edi+4]
        cmp esi, ebx
        je public_6f96aee
        lea ecx, ds:[ecx]
        public_6f96ae0 : nop
        mov ecx, esi
        call public_6f95ca0
        add esi, 0x34
        cmp esi, ebx
        jne public_6f96ae0
        public_6f96aee : nop
        mov edx, dword ptr ds : [edi+4]
        push edx
        call public_6fa8fe0
        mov eax, dword ptr ss : [esp+0x18]
        mov esi, dword ptr ss : [esp+0x1C]
        imul eax, 0x34
        add eax, esi
        mov dword ptr ds : [edi+0xC], eax
        mov eax, dword ptr ds : [edi+4]
        add esp, 4
        test eax, eax
        jne public_6f96b2a
        xor edx, edx
        mov edx, ebp
        imul edx, 0x34
        add edx, esi
        mov dword ptr ds : [edi+4], esi
        mov dword ptr ds : [edi+8], edx
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 0xC
        ret 0xC
        public_6f96b2a : nop
        mov ecx, dword ptr ds : [edi+8]
        sub ecx, eax
        mov eax, 0x4EC4EC4F
        imul ecx
        sar edx, 4
        mov eax, edx
        shr eax, 0x1F
        add edx, eax
        add edx, ebp
        imul edx, 0x34
        add edx, esi
        mov dword ptr ds : [edi+4], esi
        mov dword ptr ds : [edi+8], edx
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 0xC
        ret 0xC
        public_6f96b57 : nop
        mov ebx, dword ptr ss : [esp+0x20]
        mov edx, esi
        sub edx, ebx
        mov eax, 0x4EC4EC4F
        imul edx
        sar edx, 4
        mov eax, edx
        shr eax, 0x1F
        add edx, eax
        cmp edx, ebp
        jae public_6f96c15
        mov eax, ebp
        imul eax, 0x34
        mov dword ptr ss : [esp+0x24], eax
        add eax, ebx
        cmp ebx, esi
        mov edi, ebx
        je public_6f96bac
        sub eax, ebx
        mov dword ptr ss : [esp+0x20], eax
        jmp public_6f96b95
        public_6f96b91 : nop
        mov eax, dword ptr ss : [esp+0x20]
        public_6f96b95 : nop
        add eax, edi
        push edi
        push eax
        call public_6f96e80
        add edi, 0x34
        add esp, 8
        cmp edi, esi
        jne public_6f96b91
        mov ecx, dword ptr ss : [esp+0x10]
        public_6f96bac : nop
        mov esi, dword ptr ds : [ecx+8]
        mov edi, dword ptr ss : [esp+0x28]
        mov ecx, esi
        sub ecx, ebx
        mov eax, 0x4EC4EC4F
        imul ecx
        sar edx, 4
        mov ecx, edx
        shr ecx, 0x1F
        add edx, ecx
        sub ebp, edx
        je public_6f96be0
        lea esp, ss:[esp]
        public_6f96bd0 : nop
        push edi
        push esi
        call public_6f96e80
        add esp, 8
        add esi, 0x34
        dec ebp
        jne public_6f96bd0
        public_6f96be0 : nop
        mov ebp, dword ptr ss : [esp+0x10]
        mov esi, dword ptr ss : [ebp+8]
        cmp ebx, esi
        je public_6f96bff
        nop 
        lea esp, ss:[esp]
        public_6f96bf0 : nop
        push edi
        mov ecx, ebx
        call public_6f96f90
        add ebx, 0x34
        cmp ebx, esi
        jne public_6f96bf0
        public_6f96bff : nop
        mov eax, dword ptr ss : [ebp+8]
        mov edx, dword ptr ss : [esp+0x24]
        pop edi
        add eax, edx
        pop esi
        mov dword ptr ss : [ebp+8], eax
        pop ebp
        pop ebx
        add esp, 0xC
        ret 0xC
        public_6f96c15 : nop
        test ebp, ebp
        jbe public_6f96cfe
        imul ebp, 0x34
        mov edi, esi
        sub edi, ebp
        cmp edi, esi
        mov dword ptr ss : [esp+0x20], esi
        je public_6f96c54
        lea esp, ss:[esp]
        public_6f96c30 : nop
        mov eax, dword ptr ss : [esp+0x20]
        push edi
        push eax
        call public_6f96e80
        mov edx, dword ptr ss : [esp+0x28]
        add edx, 0x34
        add edi, 0x34
        add esp, 8
        cmp edi, esi
        mov dword ptr ss : [esp+0x20], edx
        jne public_6f96c30
        mov ecx, dword ptr ss : [esp+0x10]
        public_6f96c54 : nop
        mov edi, dword ptr ds : [ecx+8]
        mov esi, edi
        sub esi, ebp
        cmp ebx, esi
        je public_6f96ca3
        nop 
        public_6f96c60 : nop
        mov ecx, dword ptr ds : [esi-0x34]
        sub esi, 0x34
        sub edi, 0x34
        mov dword ptr ds : [edi], ecx
        mov edx, dword ptr ds : [esi+4]
        mov dword ptr ds : [edi+4], edx
        mov eax, dword ptr ds : [esi+8]
        mov dword ptr ds : [edi+8], eax
        mov ecx, dword ptr ds : [esi+0xC]
        lea edx, ds:[esi+0x10]
        mov dword ptr ds : [edi+0xC], ecx
        push edx
        lea ecx, ds:[edi+0x10]
        call public_6f971e0
        mov al, byte ptr ds : [esi+0x20]
        lea ecx, ds:[esi+0x24]
        push ecx
        lea ecx, ds:[edi+0x24]
        mov byte ptr ds : [edi+0x20], al
        call public_6f971e0
        cmp esi, ebx
        jne public_6f96c60
        mov ecx, dword ptr ss : [esp+0x10]
        public_6f96ca3 : nop
        lea eax, ds:[ebx+ebp]
        cmp ebx, eax
        mov dword ptr ss : [esp+0x20], eax
        je public_6f96cfb
        mov edi, dword ptr ss : [esp+0x28]
        lea esi, ds:[ebx+8]
        public_6f96cb5 : nop
        mov edx, dword ptr ds : [edi]
        mov dword ptr ds : [esi-8], edx
        mov eax, dword ptr ds : [edi+4]
        mov dword ptr ds : [esi-4], eax
        mov ecx, dword ptr ds : [edi+8]
        mov dword ptr ds : [esi], ecx
        mov edx, dword ptr ds : [edi+0xC]
        lea eax, ds:[edi+0x10]
        push eax
        lea ecx, ds:[esi+8]
        mov dword ptr ds : [esi+4], edx
        call public_6f971e0
        mov al, byte ptr ds : [edi+0x20]
        mov byte ptr ds : [esi+0x18], al
        lea eax, ds:[edi+0x24]
        push eax
        lea ecx, ds:[esi+0x1C]
        call public_6f971e0
        mov eax, dword ptr ss : [esp+0x20]
        add esi, 0x34
        lea ecx, ds:[esi-8]
        cmp ecx, eax
        jne public_6f96cb5
        mov ecx, dword ptr ss : [esp+0x10]
        public_6f96cfb : nop
        add dword ptr ds : [ecx+8], ebp
        public_6f96cfe : nop
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 0xC
        ret 0xC
        UNREACHABLE_TRAP(0x6f969c0)
    }
}

#undef public_6f96a12
#undef public_6f96a14
#undef public_6f96a1c
#undef public_6f96a2f
#undef public_6f96a3c
#undef public_6f96a60
#undef public_6f96a78
#undef public_6f96a82
#undef public_6f96aa2
#undef public_6f96aba
#undef public_6f96ac0
#undef public_6f96ad3
#undef public_6f96ae0
#undef public_6f96aee
#undef public_6f96b2a
#undef public_6f96b57
#undef public_6f96b91
#undef public_6f96b95
#undef public_6f96bac
#undef public_6f96bd0
#undef public_6f96be0
#undef public_6f96bf0
#undef public_6f96bff
#undef public_6f96c15
#undef public_6f96c30
#undef public_6f96c54
#undef public_6f96c60
#undef public_6f96ca3
#undef public_6f96cb5
#undef public_6f96cfb
#undef public_6f96cfe
