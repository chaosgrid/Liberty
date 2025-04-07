#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_628fd80);
CLANG_FORWARD_PROC_SYMBOL(public_62a95f0);
CLANG_FORWARD_PROC_SYMBOL(public_6319090);

#define public_62a9615 _public_62a9615
#define public_62a9625 _public_62a9625
#define public_62a9628 _public_62a9628
#define public_62a962d _public_62a962d
#define public_62a963b _public_62a963b
#define public_62a9661 _public_62a9661
#define public_62a966a _public_62a966a
#define public_62a967a _public_62a967a
#define public_62a9688 _public_62a9688

PROC_DECLARE(0x62a95f0, internal_62a95f0, public_62a95f0);
extern "C" NAKED register_t __cdecl internal_62a95f0()
{
    __asm
    {
        push ecx
        mov edx, dword ptr ds : [ecx+0xC4]
        push ebx
        lea ebx, ds:[ecx+0xBC]
        mov ecx, dword ptr ds : [ebx+4]
        push esi
        mov esi, dword ptr ds : [ecx+4]
        cmp esi, edx
        push edi
        mov edi, ecx
        mov al, 1
        je public_62a962d
        mov eax, dword ptr ss : [esp+0x14]
        push ebp
        mov ebp, dword ptr ds : [eax]
        public_62a9615 : nop
        cmp ebp, dword ptr ds : [esi+0xC]
        setb al
        test al, al
        mov edi, esi
        je public_62a9625
        mov esi, dword ptr ds : [esi]
        jmp public_62a9628
        public_62a9625 : nop
        mov esi, dword ptr ds : [esi+8]
        public_62a9628 : nop
        cmp esi, edx
        jne public_62a9615
        pop ebp
        public_62a962d : nop
        mov dl, byte ptr ds : [ebx+0xC]
        test dl, dl
        je public_62a963b
        mov ecx, dword ptr ss : [esp+0x14]
        push ecx
        jmp public_62a967a
        public_62a963b : nop
        test al, al
        mov dword ptr ss : [esp+0xC], edi
        je public_62a966a
        cmp edi, dword ptr ds : [ecx]
        jne public_62a9661
        mov eax, dword ptr ss : [esp+0x14]
        push eax
        push edi
        push esi
        lea ecx, ss:[esp+0x20]
        push ecx
        mov ecx, ebx
        call public_628fd80
        pop edi
        pop esi
        pop ebx
        pop ecx
        ret 4
        public_62a9661 : nop
        lea ecx, ss:[esp+0xC]
        call public_6319090
        public_62a966a : nop
        mov edx, dword ptr ss : [esp+0xC]
        mov ecx, dword ptr ds : [edx+0xC]
        mov eax, dword ptr ss : [esp+0x14]
        cmp ecx, dword ptr ds : [eax]
        jae public_62a9688
        push eax
        public_62a967a : nop
        push edi
        lea edx, ss:[esp+0x1C]
        push esi
        push edx
        mov ecx, ebx
        call public_628fd80
        public_62a9688 : nop
        pop edi
        pop esi
        pop ebx
        pop ecx
        ret 4
        UNREACHABLE_TRAP(0x62a95f0)
    }
}

#undef public_62a9615
#undef public_62a9625
#undef public_62a9628
#undef public_62a962d
#undef public_62a963b
#undef public_62a9661
#undef public_62a966a
#undef public_62a967a
#undef public_62a9688
