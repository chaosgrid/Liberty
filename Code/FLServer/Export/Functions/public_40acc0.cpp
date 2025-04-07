#include "FLServer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_4135a0);
CLANG_FORWARD_PROC_SYMBOL(public_418912);
CLANG_FORWARD_PROC_SYMBOL(public_419460);

#define public_40ad80 _public_40ad80
#define public_40adb2 _public_40adb2
#define public_40adc5 _public_40adc5
#define public_40add4 _public_40add4
#define public_40ade1 _public_40ade1
#define public_40adf2 _public_40adf2
#define public_40ae00 _public_40ae00
#define public_40ae14 _public_40ae14
#define public_40ae1e _public_40ae1e
#define public_40ae2b _public_40ae2b

PROC_DECLARE(0x40acc0, internal_40acc0, public_40acc0);
extern "C" NAKED register_t __cdecl internal_40acc0()
{
    __asm
    {
        mov eax, 0x2C00
        call public_419460
        mov al, byte ptr ds : [public_42621c]
        push ebx
        push esi
        push edi
        mov byte ptr ss : [esp+0xC], al
        xor eax, eax
        mov ecx, 0xFF
        lea edi, ss:[esp+0xD]
        rep stosd
        stosw 
/*FIXUP push offset public_425570 @0x40ace5*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_425570
        lea ecx, ss:[esp+0x10]
        push ecx
        mov ecx, dword ptr ds : [public_41baf8]
        stosb 
        call public_418912
        lea edx, ss:[esp+0xC]
/*FIXUP push offset public_425468 @0x40acff*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_425468
        push edx
        call dword ptr ds : [public_41b978]
        mov esi, eax
        xor ebx, ebx
        add esp, 8
        cmp esi, ebx
        je public_40ae2b
        mov ax, word ptr ds : [public_425f48]
        mov word ptr ss : [esp+0x40C], ax
        xor eax, eax
        mov ecx, 0x9FF
        lea edi, ss:[esp+0x40E]
        rep stosd
        push esi
        push 1
        lea ecx, ss:[esp+0x414]
        push 0x2800
        stosw 
        push ecx
        mov word ptr ss : [esp+0x2C1A], bx
        call dword ptr ds : [public_41b974]
        push esi
        call dword ptr ds : [public_41b970]
        lea edx, ss:[esp+0x420]
        push edx
        call dword ptr ds : [public_41b8f4]
        mov esi, eax
        add esp, 0x18
        cmp esi, 0x7FFFFFFD
        jbe public_40ad80
        call dword ptr ds : [public_41b8a0]
        public_40ad80 : nop
        mov eax, dword ptr ds : [public_4277f0]
        cmp eax, ebx
        je public_40adb2
        mov cl, byte ptr ds : [eax-1]
        cmp cl, bl
        je public_40adb2
        cmp cl, 0xFF
        je public_40adb2
        cmp esi, ebx
        jne public_40ade1
        dec cl
        mov byte ptr ds : [eax-1], cl
        mov dword ptr ds : [public_4277f0], ebx
        mov dword ptr ds : [public_4277f4], ebx
        mov dword ptr ds : [public_4277f8], ebx
        jmp public_40ae1e
        public_40adb2 : nop
        cmp esi, ebx
        jne public_40adc5
        push 1
        mov ecx, offset public_4277ec
        call dword ptr ds : [public_41b86c]
        jmp public_40ae1e
        public_40adc5 : nop
        mov ecx, dword ptr ds : [public_4277f8]
        cmp ecx, 0x1F
        ja public_40add4
        cmp ecx, esi
        jae public_40adf2
        public_40add4 : nop
        push 1
        mov ecx, offset public_4277ec
        call dword ptr ds : [public_41b86c]
        public_40ade1 : nop
        mov ecx, offset public_4277ec
        push esi
        call dword ptr ds : [public_41b8a4]
        mov eax, dword ptr ds : [public_4277f0]
        public_40adf2 : nop
        cmp esi, ebx
        lea ecx, ss:[esp+0x40C]
        jbe public_40ae14
        mov edx, esi
        nop 
        public_40ae00 : nop
        mov di, word ptr ds : [ecx]
        mov word ptr ds : [eax], di
        add eax, 2
        add ecx, 2
        dec edx
        jne public_40ae00
        mov eax, dword ptr ds : [public_4277f0]
        public_40ae14 : nop
        mov dword ptr ds : [public_4277f4], esi
        mov word ptr ds : [eax+esi*2], bx
/*FIXUP public_40ae1e : nop
        push offset public_4277ec @0x40ae1e*/
  FIXUP public_40ae1e : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_4277ec
        call public_4135a0
        add esp, 4
        public_40ae2b : nop
        pop edi
        pop esi
        pop ebx
        add esp, 0x2C00
        ret 
        UNREACHABLE_TRAP(0x40acc0)
    }
}

#undef public_40ad80
#undef public_40adb2
#undef public_40adc5
#undef public_40add4
#undef public_40ade1
#undef public_40adf2
#undef public_40ae00
#undef public_40ae14
#undef public_40ae1e
#undef public_40ae2b
