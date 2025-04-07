#include "FLServer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_409800);
CLANG_FORWARD_PROC_SYMBOL(public_40cdc0);
CLANG_FORWARD_PROC_SYMBOL(public_40ce70);
CLANG_FORWARD_PROC_SYMBOL(public_4147c0);
CLANG_FORWARD_PROC_SYMBOL(public_414820);
CLANG_FORWARD_PROC_SYMBOL(public_414ec0);
CLANG_FORWARD_PROC_SYMBOL(public_4188f4);
CLANG_FORWARD_PROC_SYMBOL(public_418924);
CLANG_FORWARD_PROC_SYMBOL(public_418978);
CLANG_FORWARD_PROC_SYMBOL(public_419050);
CLANG_FORWARD_JUMP_SYMBOL(public_41a98a);

#define public_414164 _public_414164
#define public_4141d3 _public_4141d3
#define public_41422e _public_41422e
#define public_414233 _public_414233
#define public_414260 _public_414260
#define public_414280 _public_414280
#define public_41429b _public_41429b
#define public_4142ae _public_4142ae
#define public_4142dd _public_4142dd
#define public_4142ea _public_4142ea

PROC_DECLARE(0x414080, internal_414080, public_414080);
extern "C" NAKED register_t __cdecl internal_414080()
{
    __asm
    {
        mov eax, dword ptr fs : [0]
        push 0xFFFFFFFF
/*FIXUP push public_41a98a @0x414088*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_41a98a
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        push eax
        mov eax, dword ptr ss : [esp+0x10]
        mov dword ptr fs : [0], esp
        sub esp, 0x83C
        push ebp
        mov ebp, ecx
        cmp dword ptr ds : [eax+0x10], 0xD
        jne public_4142dd
        mov ecx, dword ptr ss : [ebp+0x90]
        push ebx
        xor ebx, ebx
        push ebx
        push ebx
        push 0xE
        push ecx
        call dword ptr ds : [public_41bbe8]
        test eax, eax
        je public_4142ae
        mov eax, dword ptr ss : [ebp+0x90]
        push 0x800
        lea edx, ss:[esp+0x48]
        push edx
        push eax
        call public_409800
        add esp, 0xC
        call public_40cdc0
        mov cl, byte ptr ss : [esp+0x1B]
        push ebx
        mov byte ptr ss : [esp+0x10], cl
        push ebx
        lea ecx, ss:[esp+0x14]
        call public_414820
        mov dword ptr ss : [esp+0x10], eax
        mov dword ptr ss : [esp+0x14], ebx
        push 0x8283
        lea ecx, ss:[esp+0x2C]
        mov dword ptr ss : [esp+0x850], ebx
        call dword ptr ds : [public_41b02c]
        mov edx, dword ptr ds : [eax]
        mov ecx, eax
        mov byte ptr ss : [esp+0x84C], 1
        call dword ptr ds : [edx+0x1C]
        mov dword ptr ss : [esp+8], eax
        mov ecx, dword ptr ss : [esp+0x10]
        lea eax, ss:[esp+8]
        push eax
        push ecx
        lea edx, ss:[esp+0x24]
        push edx
        lea ecx, ss:[esp+0x18]
        mov byte ptr ss : [esp+0x858], 2
        call public_4147c0
        mov ecx, dword ptr ss : [esp+8]
        cmp ecx, ebx
        mov byte ptr ss : [esp+0x84C], 1
        je public_414164
        mov eax, dword ptr ds : [ecx]
        push 1
        call dword ptr ds : [eax]
        mov dword ptr ss : [esp+8], ebx
        public_414164 : nop
        lea ecx, ss:[esp+0x28]
        mov byte ptr ss : [esp+0x84C], bl
        call dword ptr ds : [public_41b030]
        push 0xFFFFFFFF
        lea ecx, ss:[esp+0x48]
        push ecx
        lea ecx, ss:[esp+0x38]
        call dword ptr ds : [public_41b034]
        mov edx, dword ptr ds : [eax]
        mov ecx, eax
        mov byte ptr ss : [esp+0x84C], 3
        call dword ptr ds : [edx+0x1C]
        mov dword ptr ss : [esp+8], eax
        mov ecx, dword ptr ss : [esp+0x10]
        lea eax, ss:[esp+8]
        push eax
        push ecx
        lea edx, ss:[esp+0x24]
        push edx
        lea ecx, ss:[esp+0x18]
        mov byte ptr ss : [esp+0x858], 4
        call public_4147c0
        mov ecx, dword ptr ss : [esp+8]
        cmp ecx, ebx
        mov byte ptr ss : [esp+0x84C], 3
        je public_4141d3
        mov eax, dword ptr ds : [ecx]
        push 1
        call dword ptr ds : [eax]
        mov dword ptr ss : [esp+8], ebx
        public_4141d3 : nop
        lea ecx, ss:[esp+0x30]
        mov byte ptr ss : [esp+0x84C], bl
        call dword ptr ds : [public_41b038]
        mov ecx, dword ptr ds : [public_41b03c]
        lea edx, ss:[esp+0x20]
        push edx
        push 0x800
/*FIXUP push offset public_428ce0 @0x4141f4*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_428ce0
        lea eax, ss:[esp+0x18]
        mov dword ptr ss : [esp+0x30], ecx
        push eax
        lea ecx, ss:[esp+0x34]
        call dword ptr ds : [public_41b094]
        test al, al
        je public_414260
        lea ecx, ss:[ebp+0x60]
        push ecx
        mov ecx, dword ptr ds : [public_41baf8]
        call public_418924
        cmp eax, ebx
        je public_41422e
        mov dx, word ptr ds : [eax+0x34]
        mov word ptr ss : [esp+8], dx
        jmp public_414233
        public_41422e : nop
        mov word ptr ss : [esp+8], bx
        public_414233 : nop
        mov ecx, dword ptr ss : [esp+0x20]
        mov edx, dword ptr ds : [public_428cd8]
        push 0xFFFFFFFF
        mov byte ptr ss : [esp+0xE], bl
        mov byte ptr ss : [esp+0xF], bl
        mov eax, dword ptr ss : [esp+0xC]
        push eax
        mov eax, dword ptr ds : [public_41bb70]
/*FIXUP push offset public_428ce0 @0x414251*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_428ce0
        push ecx
        push edx
        lea ecx, ds:[eax+4]
        call public_4188f4
        public_414260 : nop
        push esi
        push edi
        call public_40ce70
        mov eax, dword ptr ss : [esp+0x18]
        mov esi, dword ptr ds : [eax]
        cmp esi, eax
        mov dword ptr ss : [esp+0x854], 0xFFFFFFFF
        mov edi, eax
        je public_41429b
        mov edi, edi
        public_414280 : nop
        mov eax, esi
        mov esi, dword ptr ds : [esi]
        push eax
        lea ecx, ss:[esp+0x28]
        push ecx
        lea ecx, ss:[esp+0x1C]
        call public_414ec0
        cmp esi, edi
        jne public_414280
        mov eax, dword ptr ss : [esp+0x18]
        public_41429b : nop
        push eax
        call public_418978
        add esp, 4
        pop edi
        mov dword ptr ss : [esp+0x14], ebx
        mov dword ptr ss : [esp+0x18], ebx
        pop esi
        public_4142ae : nop
        push 0xFFFFFFFF
        push ebx
        lea ecx, ss:[ebp+0x70]
        call public_419050
        mov edx, dword ptr ss : [ebp+0x90]
        push ebx
        push ebx
        push 0x303
        push edx
        call dword ptr ds : [public_41bbe8]
        mov eax, dword ptr ss : [esp+0x858]
        mov dword ptr ds : [eax], 1
        pop ebx
        jmp public_4142ea
        public_4142dd : nop
        mov ecx, dword ptr ss : [esp+0x854]
        mov dword ptr ds : [ecx], 0
        public_4142ea : nop
        mov ecx, dword ptr ss : [esp+0x840]
        pop ebp
        mov dword ptr fs : [0], ecx
        add esp, 0x848
        ret 8
        UNREACHABLE_TRAP(0x414080)
    }
}

#undef public_414164
#undef public_4141d3
#undef public_41422e
#undef public_414233
#undef public_414260
#undef public_414280
#undef public_41429b
#undef public_4142ae
#undef public_4142dd
#undef public_4142ea
