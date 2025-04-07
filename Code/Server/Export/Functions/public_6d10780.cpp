#include "Server-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6cfdef0);
CLANG_FORWARD_PROC_SYMBOL(public_6d10780);
CLANG_FORWARD_PROC_SYMBOL(public_6d10fa0);
CLANG_FORWARD_PROC_SYMBOL(public_6d11240);
CLANG_FORWARD_PROC_SYMBOL(public_6d11270);
CLANG_FORWARD_PROC_SYMBOL(public_6d11330);
CLANG_FORWARD_PROC_SYMBOL(public_6d16080);

#define public_6d107a0 _public_6d107a0
#define public_6d107b3 _public_6d107b3
#define public_6d107b6 _public_6d107b6
#define public_6d107ba _public_6d107ba
#define public_6d10819 _public_6d10819
#define public_6d10831 _public_6d10831
#define public_6d1083b _public_6d1083b
#define public_6d1083f _public_6d1083f
#define public_6d10850 _public_6d10850
#define public_6d1089d _public_6d1089d
#define public_6d108ac _public_6d108ac
#define public_6d108d3 _public_6d108d3
#define public_6d10900 _public_6d10900
#define public_6d1090e _public_6d1090e
#define public_6d10933 _public_6d10933
#define public_6d1093f _public_6d1093f
#define public_6d1095e _public_6d1095e
#define public_6d10979 _public_6d10979
#define public_6d10980 _public_6d10980
#define public_6d109a3 _public_6d109a3

PROC_DECLARE(0x6d10780, internal_6d10780, public_6d10780);
extern "C" NAKED register_t __cdecl internal_6d10780()
{
    __asm
    {
        push ecx
        push ebx
        mov ebx, dword ptr ss : [esp+0x10]
        push ebp
        push esi
        push edi
        mov edi, ecx
        mov ecx, dword ptr ds : [edi+4]
        mov ebp, dword ptr ds : [ecx+4]
        mov edx, dword ptr ds : [edi+8]
        cmp ebp, edx
        mov esi, ecx
        mov al, 1
        je public_6d107ba
        lea esp, ss:[esp]
        public_6d107a0 : nop
        mov eax, dword ptr ds : [ebx]
        cmp eax, dword ptr ss : [ebp+0xC]
        mov esi, ebp
        setb al
        test al, al
        je public_6d107b3
        mov ebp, dword ptr ss : [ebp]
        jmp public_6d107b6
        public_6d107b3 : nop
        mov ebp, dword ptr ss : [ebp+8]
        public_6d107b6 : nop
        cmp ebp, edx
        jne public_6d107a0
        public_6d107ba : nop
        mov dl, byte ptr ds : [edi+0xC]
        test dl, dl
        je public_6d1095e
        push 0
        push esi
        mov ecx, edi
        call public_6d11240
        mov ecx, dword ptr ds : [edi+8]
        mov dword ptr ds : [eax], ecx
        mov edx, dword ptr ds : [edi+8]
        mov dword ptr ss : [esp+0x1C], eax
        mov dword ptr ds : [eax+8], edx
        add eax, 0xC
        push ebx
        push eax
        call public_6d11330
        mov ecx, dword ptr ds : [edi+0x10]
        mov eax, dword ptr ds : [edi+4]
        add esp, 8
        inc ecx
        cmp esi, eax
        mov dword ptr ds : [edi+0x10], ecx
        je public_6d10819
        cmp ebp, dword ptr ds : [edi+8]
        jne public_6d10819
        mov eax, dword ptr ds : [ebx]
        cmp eax, dword ptr ds : [esi+0xC]
        jb public_6d10819
        mov ebx, dword ptr ss : [esp+0x1C]
        mov dword ptr ds : [esi+8], ebx
        mov eax, dword ptr ds : [edi+4]
        cmp esi, dword ptr ds : [eax+8]
        jne public_6d1083f
        mov dword ptr ds : [eax+8], ebx
        jmp public_6d1083f
        public_6d10819 : nop
        mov ecx, dword ptr ss : [esp+0x1C]
        mov dword ptr ds : [esi], ecx
        mov eax, dword ptr ds : [edi+4]
        cmp esi, eax
        jne public_6d10831
        mov dword ptr ds : [eax+4], ecx
        mov edx, dword ptr ds : [edi+4]
        mov dword ptr ds : [edx+8], ecx
        jmp public_6d1083b
        public_6d10831 : nop
        cmp esi, dword ptr ds : [eax]
        jne public_6d1083b
        mov ecx, dword ptr ss : [esp+0x1C]
        mov dword ptr ds : [eax], ecx
        public_6d1083b : nop
        mov ebx, dword ptr ss : [esp+0x1C]
        public_6d1083f : nop
        mov edx, dword ptr ds : [edi+4]
        cmp ebx, dword ptr ds : [edx+4]
        mov esi, ebx
        je public_6d1093f
        lea ecx, ds:[ecx]
        public_6d10850 : nop
        mov eax, dword ptr ds : [esi+4]
        mov cl, byte ptr ds : [eax+0x110]
        test cl, cl
        jne public_6d1093f
        mov edx, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [edx]
        cmp eax, ecx
        jne public_6d108d3
        mov ecx, dword ptr ds : [edx+8]
        mov dl, byte ptr ds : [ecx+0x110]
        test dl, dl
        jne public_6d1089d
        mov byte ptr ds : [eax+0x110], 1
        mov byte ptr ds : [ecx+0x110], 1
        mov eax, dword ptr ds : [esi+4]
        mov ecx, dword ptr ds : [eax+4]
        mov byte ptr ds : [ecx+0x110], 0
        mov edx, dword ptr ds : [esi+4]
        mov esi, dword ptr ds : [edx+4]
        jmp public_6d10933
        public_6d1089d : nop
        cmp esi, dword ptr ds : [eax+8]
        jne public_6d108ac
        mov esi, eax
        push esi
        mov ecx, edi
        call public_6d16080
        public_6d108ac : nop
        mov eax, dword ptr ds : [esi+4]
        mov byte ptr ds : [eax+0x110], 1
        mov ecx, dword ptr ds : [esi+4]
        mov edx, dword ptr ds : [ecx+4]
        mov byte ptr ds : [edx+0x110], 0
        mov eax, dword ptr ds : [esi+4]
        mov ecx, dword ptr ds : [eax+4]
        push ecx
        mov ecx, edi
        call public_6cfdef0
        jmp public_6d10933
        public_6d108d3 : nop
        mov dl, byte ptr ds : [ecx+0x110]
        test dl, dl
        jne public_6d10900
        mov byte ptr ds : [eax+0x110], 1
        mov byte ptr ds : [ecx+0x110], 1
        mov edx, dword ptr ds : [esi+4]
        mov eax, dword ptr ds : [edx+4]
        mov byte ptr ds : [eax+0x110], 0
        mov ecx, dword ptr ds : [esi+4]
        mov esi, dword ptr ds : [ecx+4]
        jmp public_6d10933
        public_6d10900 : nop
        cmp esi, dword ptr ds : [eax]
        jne public_6d1090e
        mov esi, eax
        push esi
        mov ecx, edi
        call public_6cfdef0
        public_6d1090e : nop
        mov edx, dword ptr ds : [esi+4]
        mov byte ptr ds : [edx+0x110], 1
        mov eax, dword ptr ds : [esi+4]
        mov ecx, dword ptr ds : [eax+4]
        mov byte ptr ds : [ecx+0x110], 0
        mov edx, dword ptr ds : [esi+4]
        mov eax, dword ptr ds : [edx+4]
        push eax
        mov ecx, edi
        call public_6d16080
        public_6d10933 : nop
        mov ecx, dword ptr ds : [edi+4]
        cmp esi, dword ptr ds : [ecx+4]
        jne public_6d10850
        public_6d1093f : nop
        mov edx, dword ptr ds : [edi+4]
        mov eax, dword ptr ds : [edx+4]
        pop edi
        mov byte ptr ds : [eax+0x110], 1
        mov eax, dword ptr ss : [esp+0x14]
        pop esi
        pop ebp
        mov dword ptr ds : [eax], ebx
        mov byte ptr ds : [eax+4], 1
        pop ebx
        pop ecx
        ret 8
        public_6d1095e : nop
        test al, al
        mov edx, esi
        mov dword ptr ss : [esp+0x10], edx
        je public_6d10979
        cmp esi, dword ptr ds : [ecx]
        je public_6d10980
        lea ecx, ss:[esp+0x10]
        call public_6d11270
        mov edx, dword ptr ss : [esp+0x10]
        public_6d10979 : nop
        mov eax, dword ptr ds : [edx+0xC]
        cmp eax, dword ptr ds : [ebx]
        jae public_6d109a3
        public_6d10980 : nop
        push ebx
        push esi
        push ebp
        lea ecx, ss:[esp+0x28]
        push ecx
        mov ecx, edi
        call public_6d10fa0
        mov edx, dword ptr ds : [eax]
        mov eax, dword ptr ss : [esp+0x18]
        pop edi
        pop esi
        pop ebp
        mov byte ptr ds : [eax+4], 1
        mov dword ptr ds : [eax], edx
        pop ebx
        pop ecx
        ret 8
        public_6d109a3 : nop
        mov eax, dword ptr ss : [esp+0x18]
        pop edi
        pop esi
        pop ebp
        mov byte ptr ds : [eax+4], 0
        mov dword ptr ds : [eax], edx
        pop ebx
        pop ecx
        ret 8
        UNREACHABLE_TRAP(0x6d10780)
    }
}

#undef public_6d107a0
#undef public_6d107b3
#undef public_6d107b6
#undef public_6d107ba
#undef public_6d10819
#undef public_6d10831
#undef public_6d1083b
#undef public_6d1083f
#undef public_6d10850
#undef public_6d1089d
#undef public_6d108ac
#undef public_6d108d3
#undef public_6d10900
#undef public_6d1090e
#undef public_6d10933
#undef public_6d1093f
#undef public_6d1095e
#undef public_6d10979
#undef public_6d10980
#undef public_6d109a3
