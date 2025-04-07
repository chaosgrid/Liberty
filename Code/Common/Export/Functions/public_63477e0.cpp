#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6343fb0);
CLANG_FORWARD_PROC_SYMBOL(public_63477e0);
CLANG_FORWARD_PROC_SYMBOL(public_6348cb0);
CLANG_FORWARD_PROC_SYMBOL(public_634bb20);
CLANG_FORWARD_PROC_SYMBOL(public_6352a80);
CLANG_FORWARD_PROC_SYMBOL(public_6391d5a);
CLANG_FORWARD_JUMP_SYMBOL(public_6397b96);

#define public_6347837 _public_6347837
#define public_6347843 _public_6347843
#define public_6347854 _public_6347854
#define public_6347864 _public_6347864
#define public_6347894 _public_6347894
#define public_63478a1 _public_63478a1
#define public_63478c7 _public_63478c7
#define public_63478ce _public_63478ce

PROC_DECLARE(0x63477e0, internal_63477e0, public_63477e0);
extern "C" NAKED register_t __cdecl internal_63477e0()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_6397b96 @0x63477e2*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_6397b96
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        push ecx
        push ebx
        push esi
        mov esi, ecx
        push edi
        mov dword ptr ss : [esp+0xC], esi
        mov ecx, dword ptr ds : [esi+0xC]
        push esi
        mov dword ptr ss : [esp+0x1C], 1
        call public_634bb20
        mov eax, dword ptr ds : [esi]
        and eax, 0xC
        xor ebx, ebx
        cmp al, 4
        jne public_6347837
        mov edi, dword ptr ds : [esi+0x5C]
        cmp edi, ebx
        je public_6347854
        mov ecx, edi
        call public_6352a80
        push edi
        call public_6391d5a
        add esp, 4
        mov dword ptr ds : [esi+0x5C], ebx
        jmp public_6347854
        public_6347837 : nop
        xor edi, edi
        mov di, word ptr ds : [esi+0x152]
        dec edi
        js public_6347854
        public_6347843 : nop
        mov ecx, dword ptr ds : [esi+0x154]
        mov ecx, dword ptr ds : [ecx+edi*4]
        mov edx, dword ptr ds : [ecx]
        push esi
        call dword ptr ds : [edx]
        dec edi
        jns public_6347843
        public_6347854 : nop
        mov ecx, dword ptr ds : [esi+0x15C]
        cmp ecx, ebx
        je public_6347864
        push esi
        call public_6348cb0
        public_6347864 : nop
        mov eax, dword ptr ds : [esi+0x4C]
        push eax
        call public_6391d5a
        mov dword ptr ds : [esi+0x4C], ebx
        mov eax, dword ptr ds : [esi+0x154]
        lea ecx, ds:[esi+0x158]
        add esp, 4
        cmp eax, ecx
        mov byte ptr ss : [esp+0x18], bl
        je public_63478a1
        cmp eax, ebx
        je public_6347894
        push eax
        call public_6343fb0
        add esp, 4
        public_6347894 : nop
        mov dword ptr ds : [esi+0x154], ebx
        mov word ptr ds : [esi+0x150], bx
        public_63478a1 : nop
        mov word ptr ds : [esi+0x152], bx
        mov eax, dword ptr ds : [esi+0x54]
        lea edx, ds:[esi+0x58]
        cmp eax, edx
        mov dword ptr ss : [esp+0x18], 0xFFFFFFFF
        je public_63478ce
        cmp eax, ebx
        je public_63478c7
        push eax
        call public_6343fb0
        add esp, 4
        public_63478c7 : nop
        mov dword ptr ds : [esi+0x54], ebx
        mov word ptr ds : [esi+0x50], bx
        public_63478ce : nop
        mov ecx, dword ptr ss : [esp+0x10]
        mov word ptr ds : [esi+0x52], bx
        pop edi
        pop esi
        pop ebx
        mov dword ptr fs : [0], ecx
        add esp, 0x10
        ret 
        UNREACHABLE_TRAP(0x63477e0)
    }
}

#undef public_6347837
#undef public_6347843
#undef public_6347854
#undef public_6347864
#undef public_6347894
#undef public_63478a1
#undef public_63478c7
#undef public_63478ce
