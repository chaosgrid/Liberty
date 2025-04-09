#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_45e800);
CLANG_FORWARD_PROC_SYMBOL(public_45eaf0);
CLANG_FORWARD_PROC_SYMBOL(public_46cd50);
CLANG_FORWARD_PROC_SYMBOL(public_52afa0);

#define public_45e860 _public_45e860
#define public_45e878 _public_45e878
#define public_45e890 _public_45e890
#define public_45e89b _public_45e89b
#define public_45e8ac _public_45e8ac
#define public_45e8b6 _public_45e8b6
#define public_45e8c9 _public_45e8c9
#define public_45e8cf _public_45e8cf
#define public_45e8dd _public_45e8dd
#define public_45e901 _public_45e901
#define public_45e930 _public_45e930

PROC_DECLARE(0x45e800, internal_45e800, public_45e800);
extern "C" NAKED register_t __cdecl internal_45e800()
{
    __asm
    {
        sub esp, 0x10
        mov ax, word ptr ds : [public_673344]
        mov edx, dword ptr ds : [public_66da40]
        push ebx
        push esi
        mov esi, ecx
        xor ebx, ebx
        lea ecx, ds:[esi+0x568]
        mov word ptr ss : [esp+0xC], ax
        mov eax, dword ptr ds : [ecx]
        cmp eax, edx
        push edi
        mov word ptr ss : [esp+0xC], bx
        mov byte ptr ss : [esp+0xE], bl
        mov byte ptr ss : [esp+0xF], bl
        mov byte ptr ss : [esp+0x12], bl
        mov byte ptr ss : [esp+0x13], bl
        jne public_45e8cf
        mov ecx, dword ptr ds : [esi+0x530]
        mov dword ptr ss : [esp+0xC], edx
        mov edx, dword ptr ds : [ecx+4]
        mov eax, dword ptr ds : [edx]
        mov dword ptr ss : [esp+0x18], eax
        cmp eax, dword ptr ds : [ecx+4]
        je public_45e890
        mov edi, dword ptr ss : [esp+0x10]
        lea esp, ss:[esp]
        public_45e860 : nop
        mov ecx, dword ptr ds : [eax+0xC]
        mov eax, dword ptr ds : [eax+0x10]
        mov dword ptr ss : [esp+0x10], ecx
        mov dword ptr ss : [esp+0x14], eax
        cmp byte ptr ss : [esp+0x12], bl
        jne public_45e878
        cmp ecx, edi
        jne public_45e8c9
        public_45e878 : nop
        lea ecx, ss:[esp+0x18]
        call public_52afa0
        mov ecx, dword ptr ds : [esi+0x530]
        mov eax, dword ptr ss : [esp+0x18]
        cmp eax, dword ptr ds : [ecx+4]
        jne public_45e860
        public_45e890 : nop
        mov eax, dword ptr ds : [public_66da38]
        cmp dword ptr ss : [esp+0xC], eax
        jne public_45e8b6
        public_45e89b : nop
        mov eax, dword ptr ds : [public_66da84]
        cmp eax, ebx
        je public_45e8ac
        cmp dword ptr ds : [eax+0x350], ebx
        jne public_45e8b6
        public_45e8ac : nop
        mov ecx, dword ptr ds : [public_66da40]
        mov dword ptr ss : [esp+0xC], ecx
        public_45e8b6 : nop
        lea edx, ss:[esp+0xC]
        push edx
        mov ecx, esi
        call public_45eaf0
        pop edi
        pop esi
        pop ebx
        add esp, 0x10
        ret 
        public_45e8c9 : nop
        mov dword ptr ss : [esp+0xC], ecx
        jmp public_45e890
        public_45e8cf : nop
        cmp eax, dword ptr ds : [public_66da38]
        jne public_45e8dd
        mov dword ptr ss : [esp+0xC], edx
        jmp public_45e890
        public_45e8dd : nop
        push ecx
        mov ecx, dword ptr ds : [esi+0x530]
        lea edx, ss:[esp+0x1C]
        push edx
        call public_46cd50
        mov eax, dword ptr ds : [esi+0x530]
        mov ecx, dword ptr ss : [esp+0x18]
        cmp ecx, dword ptr ds : [eax+4]
        je public_45e890
        mov edi, dword ptr ss : [esp+0x10]
        public_45e901 : nop
        lea ecx, ss:[esp+0x18]
        call public_52afa0
        mov edx, dword ptr ds : [esi+0x530]
        mov ecx, dword ptr ss : [esp+0x18]
        cmp ecx, dword ptr ds : [edx+4]
        je public_45e930
        mov eax, dword ptr ds : [ecx+0xC]
        cmp eax, edi
        mov ecx, dword ptr ds : [ecx+0x10]
        mov dword ptr ss : [esp+0x14], ecx
        je public_45e901
        mov dword ptr ss : [esp+0xC], eax
        jmp public_45e890
        public_45e930 : nop
        mov edx, dword ptr ds : [public_66da38]
        mov dword ptr ss : [esp+0xC], edx
        jmp public_45e89b
        UNREACHABLE_TRAP(0x45e800)
    }
}

#undef public_45e860
#undef public_45e878
#undef public_45e890
#undef public_45e89b
#undef public_45e8ac
#undef public_45e8b6
#undef public_45e8c9
#undef public_45e8cf
#undef public_45e8dd
#undef public_45e901
#undef public_45e930
