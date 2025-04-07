#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6356960);
CLANG_FORWARD_PROC_SYMBOL(public_636e1b0);
CLANG_FORWARD_PROC_SYMBOL(public_636e740);
CLANG_FORWARD_PROC_SYMBOL(public_636ec10);
CLANG_FORWARD_PROC_SYMBOL(public_636ec70);
CLANG_FORWARD_PROC_SYMBOL(public_636ed80);
CLANG_FORWARD_PROC_SYMBOL(public_6378600);
CLANG_FORWARD_PROC_SYMBOL(public_6390870);

#define public_63908c8 _public_63908c8
#define public_63908e4 _public_63908e4
#define public_6390911 _public_6390911
#define public_6390938 _public_6390938
#define public_6390940 _public_6390940
#define public_6390946 _public_6390946
#define public_639095b _public_639095b
#define public_639095f _public_639095f
#define public_6390965 _public_6390965
#define public_639097c _public_639097c
#define public_63909a5 _public_63909a5

PROC_DECLARE(0x6390870, internal_6390870, public_6390870);
extern "C" NAKED register_t __cdecl internal_6390870()
{
    __asm
    {
        push ecx
        push ebx
        mov ebx, dword ptr ss : [esp+0x10]
        mov eax, dword ptr ds : [ebx]
        push ebp
        push esi
        push edi
        push eax
        call public_636ec10
        mov edi, dword ptr ss : [esp+0x1C]
        push edi
        mov ebp, eax
        call public_636ec10
        mov esi, dword ptr ds : [public_658b24c]
        mov ecx, 1
        sub ecx, esi
        mov esi, dword ptr ds : [ebx]
        add ebp, eax
        add ebp, ecx
        push ebp
        add esi, 4
        call public_636ec70
        add esp, 0xC
        test edi, edi
        mov dword ptr ss : [esp+0x10], eax
        je public_639095f
        lea ebx, ds:[edi+4]
        mov edi, dword ptr ds : [ebx]
        add ebx, 4
        test edi, edi
        je public_639095b
        public_63908c8 : nop
        mov eax, dword ptr ds : [esi]
        test eax, eax
        je public_6390940
        mov edx, dword ptr ds : [eax+0x14]
        mov ecx, dword ptr ds : [edi+0x14]
        and edx, 0xFFFFFF
        and ecx, 0xFFFFFF
        cmp ecx, edx
        ja public_6390940
        public_63908e4 : nop
        mov edx, dword ptr ds : [eax+0x14]
        mov ecx, dword ptr ds : [edi+0x14]
        and edx, 0xFFFFFF
        and ecx, 0xFFFFFF
        cmp edx, ecx
        jbe public_6390911
        push eax
        lea edx, ss:[esp+0x14]
        push edx
        add esi, 4
        call public_636e1b0
        mov eax, dword ptr ds : [esi]
        add esp, 8
        test eax, eax
        jne public_63908e4
        public_6390911 : nop
        mov eax, dword ptr ds : [esi]
        test eax, eax
        je public_6390938
        mov ecx, dword ptr ds : [eax+0x14]
        mov edx, dword ptr ds : [edi+0x14]
        and ecx, 0xFFFFFF
        and edx, 0xFFFFFF
        cmp ecx, edx
        jb public_6390938
        push eax
        lea eax, ss:[esp+0x14]
        add esi, 4
        push eax
        jmp public_6390946
        public_6390938 : nop
        push edi
        lea ecx, ss:[esp+0x14]
        push ecx
        jmp public_6390946
        public_6390940 : nop
        push edi
        lea edx, ss:[esp+0x14]
        push edx
        public_6390946 : nop
        call public_636e1b0
        mov edi, dword ptr ds : [ebx]
        add esp, 8
        add ebx, 4
        test edi, edi
        jne public_63908c8
        public_639095b : nop
        mov ebx, dword ptr ss : [esp+0x1C]
        public_639095f : nop
        mov eax, dword ptr ds : [esi]
        test eax, eax
        je public_639097c
        public_6390965 : nop
        push eax
        lea eax, ss:[esp+0x14]
        push eax
        add esi, 4
        call public_636e1b0
        mov eax, dword ptr ds : [esi]
        add esp, 8
        test eax, eax
        jne public_6390965
        public_639097c : nop
        mov ecx, dword ptr ss : [esp+0x10]
        push ecx
        call public_636ec10
        add esp, 4
        cmp ebp, eax
        jge public_63909a5
/*FIXUP push offset public_63fb4b0 @0x639098d*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_63fb4b0
        call public_6356960
        push 0
        push 0
        push 5
        call public_6378600
        add esp, 0x10
        public_63909a5 : nop
        push ebx
        call public_636e740
        mov edx, dword ptr ss : [esp+0x14]
        add esp, 4
        mov dword ptr ds : [ebx], edx
        call public_636ed80
        pop edi
        pop esi
        pop ebp
        pop ebx
        pop ecx
        ret 
        UNREACHABLE_TRAP(0x6390870)
    }
}

#undef public_63908c8
#undef public_63908e4
#undef public_6390911
#undef public_6390938
#undef public_6390940
#undef public_6390946
#undef public_639095b
#undef public_639095f
#undef public_6390965
#undef public_639097c
#undef public_63909a5
