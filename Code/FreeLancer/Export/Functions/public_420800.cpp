#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_420800);
CLANG_FORWARD_PROC_SYMBOL(public_420c40);
CLANG_FORWARD_PROC_SYMBOL(public_420cb0);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e1d);

#define public_420824 _public_420824
#define public_420842 _public_420842
#define public_42084d _public_42084d
#define public_420856 _public_420856
#define public_420861 _public_420861
#define public_42087d _public_42087d
#define public_420894 _public_420894
#define public_4208a1 _public_4208a1
#define public_4208ac _public_4208ac
#define public_4208af _public_4208af
#define public_4208c7 _public_4208c7
#define public_4208d2 _public_4208d2
#define public_4208d5 _public_4208d5
#define public_4208ea _public_4208ea
#define public_4208f5 _public_4208f5
#define public_420900 _public_420900
#define public_420903 _public_420903
#define public_420917 _public_420917
#define public_420923 _public_420923
#define public_42092f _public_42092f
#define public_420932 _public_420932
#define public_420950 _public_420950
#define public_42098f _public_42098f
#define public_4209a2 _public_4209a2
#define public_4209ad _public_4209ad
#define public_4209b0 _public_4209b0
#define public_4209bb _public_4209bb
#define public_4209ce _public_4209ce
#define public_4209f5 _public_4209f5
#define public_420a0f _public_420a0f
#define public_420a35 _public_420a35
#define public_420a48 _public_420a48
#define public_420a55 _public_420a55
#define public_420a57 _public_420a57
#define public_420a62 _public_420a62
#define public_420a79 _public_420a79
#define public_420a91 _public_420a91
#define public_420a9e _public_420a9e
#define public_420aa0 _public_420aa0
#define public_420aac _public_420aac
#define public_420ad6 _public_420ad6
#define public_420aee _public_420aee
#define public_420afe _public_420afe
#define public_420b08 _public_420b08
#define public_420b2b _public_420b2b
#define public_420b3e _public_420b3e
#define public_420b49 _public_420b49
#define public_420b4c _public_420b4c
#define public_420b56 _public_420b56
#define public_420b7f _public_420b7f
#define public_420b92 _public_420b92
#define public_420b9f _public_420b9f
#define public_420ba1 _public_420ba1
#define public_420ba4 _public_420ba4
#define public_420ba7 _public_420ba7
#define public_420bae _public_420bae

PROC_DECLARE(0x420800, internal_420800, public_420800);
extern "C" NAKED register_t __cdecl internal_420800()
{
    __asm
    {
        push ecx
        push ebx
        push ebp
        push esi
        mov esi, dword ptr ss : [esp+0x18]
        push edi
        mov edi, ecx
        lea ecx, ss:[esp+0x1C]
        call public_420c40
        mov edx, dword ptr ds : [esi]
        mov eax, dword ptr ds : [edi+8]
        cmp edx, eax
        mov dword ptr ss : [esp+0x10], esi
        jne public_420842
        mov eax, dword ptr ds : [esi+8]
        public_420824 : nop
        mov ecx, dword ptr ss : [esp+0x10]
        mov edx, dword ptr ds : [ecx+4]
        mov dword ptr ds : [eax+4], edx
        mov ecx, dword ptr ds : [edi+4]
        cmp dword ptr ds : [ecx+4], esi
        jne public_4208c7
        mov dword ptr ds : [ecx+4], eax
        jmp public_4208d5
        public_420842 : nop
        mov ecx, dword ptr ds : [esi+8]
        cmp ecx, eax
        jne public_42084d
        mov eax, edx
        jmp public_420824
        public_42084d : nop
        mov eax, dword ptr ds : [ecx]
        mov bl, byte ptr ds : [eax+0x59]
        test bl, bl
        jne public_420861
        public_420856 : nop
        mov ecx, eax
        mov eax, dword ptr ds : [ecx]
        mov bl, byte ptr ds : [eax+0x59]
        test bl, bl
        je public_420856
        public_420861 : nop
        cmp ecx, esi
        mov eax, dword ptr ds : [ecx+8]
        mov dword ptr ss : [esp+0x10], ecx
        je public_420824
        mov dword ptr ds : [edx+4], ecx
        mov edx, dword ptr ds : [esi]
        mov dword ptr ds : [ecx], edx
        cmp ecx, dword ptr ds : [esi+8]
        jne public_42087d
        mov dword ptr ds : [eax+4], ecx
        jmp public_420894
        public_42087d : nop
        mov edx, dword ptr ds : [ecx+4]
        mov dword ptr ds : [eax+4], edx
        mov edx, dword ptr ds : [ecx+4]
        mov dword ptr ds : [edx], eax
        mov edx, dword ptr ds : [esi+8]
        mov dword ptr ds : [ecx+8], edx
        mov edx, dword ptr ds : [esi+8]
        mov dword ptr ds : [edx+4], ecx
        public_420894 : nop
        mov edx, dword ptr ds : [edi+4]
        cmp dword ptr ds : [edx+4], esi
        jne public_4208a1
        mov dword ptr ds : [edx+4], ecx
        jmp public_4208af
        public_4208a1 : nop
        mov edx, dword ptr ds : [esi+4]
        cmp dword ptr ds : [edx], esi
        jne public_4208ac
        mov dword ptr ds : [edx], ecx
        jmp public_4208af
        public_4208ac : nop
        mov dword ptr ds : [edx+8], ecx
        public_4208af : nop
        mov edx, dword ptr ds : [esi+4]
        mov dword ptr ds : [ecx+4], edx
        mov bl, byte ptr ds : [esi+0x58]
        mov dl, byte ptr ds : [ecx+0x58]
        mov byte ptr ds : [ecx+0x58], bl
        mov byte ptr ds : [esi+0x58], dl
        mov dword ptr ss : [esp+0x10], esi
        jmp public_420932
        public_4208c7 : nop
        mov ecx, dword ptr ds : [esi+4]
        cmp dword ptr ds : [ecx], esi
        jne public_4208d2
        mov dword ptr ds : [ecx], eax
        jmp public_4208d5
        public_4208d2 : nop
        mov dword ptr ds : [ecx+8], eax
        public_4208d5 : nop
        mov ebp, dword ptr ds : [edi+4]
        cmp dword ptr ss : [ebp], esi
        jne public_420903
        mov ecx, dword ptr ds : [esi+8]
        cmp ecx, dword ptr ds : [edi+8]
        jne public_4208ea
        mov edx, dword ptr ds : [esi+4]
        jmp public_420900
        public_4208ea : nop
        mov ecx, dword ptr ds : [eax]
        mov bl, byte ptr ds : [ecx+0x59]
        test bl, bl
        mov edx, eax
        jne public_420900
        public_4208f5 : nop
        mov edx, ecx
        mov ecx, dword ptr ds : [edx]
        mov bl, byte ptr ds : [ecx+0x59]
        test bl, bl
        je public_4208f5
        public_420900 : nop
        mov dword ptr ss : [ebp], edx
        public_420903 : nop
        mov ebp, dword ptr ds : [edi+4]
        cmp dword ptr ss : [ebp+8], esi
        jne public_420932
        mov ecx, dword ptr ds : [esi]
        cmp ecx, dword ptr ds : [edi+8]
        jne public_420917
        mov edx, dword ptr ds : [esi+4]
        jmp public_42092f
        public_420917 : nop
        mov ecx, dword ptr ds : [eax+8]
        mov bl, byte ptr ds : [ecx+0x59]
        test bl, bl
        mov edx, eax
        jne public_42092f
        public_420923 : nop
        mov edx, ecx
        mov ecx, dword ptr ds : [edx+8]
        mov bl, byte ptr ds : [ecx+0x59]
        test bl, bl
        je public_420923
        public_42092f : nop
        mov dword ptr ss : [ebp+8], edx
        public_420932 : nop
        mov esi, dword ptr ss : [esp+0x10]
        mov cl, byte ptr ds : [esi+0x58]
        mov bl, 1
        cmp cl, bl
        jne public_420bae
        mov ecx, dword ptr ds : [edi+4]
        cmp eax, dword ptr ds : [ecx+4]
        je public_420ba7
        nop 
        public_420950 : nop
        cmp byte ptr ds : [eax+0x58], bl
        jne public_420ba7
        mov edx, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [edx]
        cmp eax, ecx
        jne public_420a0f
        mov ecx, dword ptr ds : [edx+8]
        mov dl, byte ptr ds : [ecx+0x58]
        test dl, dl
        jne public_4209bb
        mov byte ptr ds : [ecx+0x58], bl
        mov edx, dword ptr ds : [eax+4]
        mov byte ptr ds : [edx+0x58], 0
        mov ecx, dword ptr ds : [eax+4]
        mov edx, dword ptr ds : [ecx+8]
        mov esi, dword ptr ds : [edx]
        mov dword ptr ds : [ecx+8], esi
        mov esi, dword ptr ds : [edx]
        cmp esi, dword ptr ds : [edi+8]
        je public_42098f
        mov dword ptr ds : [esi+4], ecx
        public_42098f : nop
        mov esi, dword ptr ds : [ecx+4]
        mov dword ptr ds : [edx+4], esi
        mov esi, dword ptr ds : [edi+4]
        cmp ecx, dword ptr ds : [esi+4]
        jne public_4209a2
        mov dword ptr ds : [esi+4], edx
        jmp public_4209b0
        public_4209a2 : nop
        mov esi, dword ptr ds : [ecx+4]
        cmp ecx, dword ptr ds : [esi]
        jne public_4209ad
        mov dword ptr ds : [esi], edx
        jmp public_4209b0
        public_4209ad : nop
        mov dword ptr ds : [esi+8], edx
        public_4209b0 : nop
        mov dword ptr ds : [edx], ecx
        mov dword ptr ds : [ecx+4], edx
        mov ecx, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [ecx+8]
        public_4209bb : nop
        mov edx, dword ptr ds : [ecx]
        cmp byte ptr ds : [edx+0x58], bl
        jne public_4209ce
        mov edx, dword ptr ds : [ecx+8]
        cmp byte ptr ds : [edx+0x58], bl
        je public_420a79
        public_4209ce : nop
        mov edx, dword ptr ds : [ecx+8]
        cmp byte ptr ds : [edx+0x58], bl
        jne public_420aac
        mov edx, dword ptr ds : [ecx]
        mov byte ptr ds : [edx+0x58], bl
        mov edx, dword ptr ds : [ecx]
        mov byte ptr ds : [ecx+0x58], 0
        mov esi, dword ptr ds : [edx+8]
        mov dword ptr ds : [ecx], esi
        mov esi, dword ptr ds : [edx+8]
        cmp esi, dword ptr ds : [edi+8]
        je public_4209f5
        mov dword ptr ds : [esi+4], ecx
        public_4209f5 : nop
        mov esi, dword ptr ds : [ecx+4]
        mov dword ptr ds : [edx+4], esi
        mov esi, dword ptr ds : [edi+4]
        cmp ecx, dword ptr ds : [esi+4]
        jne public_420a91
        mov dword ptr ds : [esi+4], edx
        jmp public_420aa0
        public_420a0f : nop
        mov dl, byte ptr ds : [ecx+0x58]
        test dl, dl
        jne public_420a62
        mov byte ptr ds : [ecx+0x58], bl
        mov ecx, dword ptr ds : [eax+4]
        mov byte ptr ds : [ecx+0x58], 0
        mov ecx, dword ptr ds : [eax+4]
        mov edx, dword ptr ds : [ecx]
        mov esi, dword ptr ds : [edx+8]
        mov dword ptr ds : [ecx], esi
        mov esi, dword ptr ds : [edx+8]
        cmp esi, dword ptr ds : [edi+8]
        je public_420a35
        mov dword ptr ds : [esi+4], ecx
        public_420a35 : nop
        mov esi, dword ptr ds : [ecx+4]
        mov dword ptr ds : [edx+4], esi
        mov esi, dword ptr ds : [edi+4]
        cmp ecx, dword ptr ds : [esi+4]
        jne public_420a48
        mov dword ptr ds : [esi+4], edx
        jmp public_420a57
        public_420a48 : nop
        mov esi, dword ptr ds : [ecx+4]
        cmp ecx, dword ptr ds : [esi+8]
        jne public_420a55
        mov dword ptr ds : [esi+8], edx
        jmp public_420a57
        public_420a55 : nop
        mov dword ptr ds : [esi], edx
        public_420a57 : nop
        mov dword ptr ds : [edx+8], ecx
        mov dword ptr ds : [ecx+4], edx
        mov edx, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [edx]
        public_420a62 : nop
        mov edx, dword ptr ds : [ecx+8]
        cmp byte ptr ds : [edx+0x58], bl
        jne public_420b08
        mov edx, dword ptr ds : [ecx]
        cmp byte ptr ds : [edx+0x58], bl
        jne public_420b08
        public_420a79 : nop
        mov byte ptr ds : [ecx+0x58], 0
        mov ecx, dword ptr ds : [edi+4]
        mov eax, dword ptr ds : [eax+4]
        cmp eax, dword ptr ds : [ecx+4]
        jne public_420950
        jmp public_420ba7
        public_420a91 : nop
        mov esi, dword ptr ds : [ecx+4]
        cmp ecx, dword ptr ds : [esi+8]
        jne public_420a9e
        mov dword ptr ds : [esi+8], edx
        jmp public_420aa0
        public_420a9e : nop
        mov dword ptr ds : [esi], edx
        public_420aa0 : nop
        mov dword ptr ds : [edx+8], ecx
        mov dword ptr ds : [ecx+4], edx
        mov ecx, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [ecx+8]
        public_420aac : nop
        mov edx, dword ptr ds : [eax+4]
        mov dl, byte ptr ds : [edx+0x58]
        mov byte ptr ds : [ecx+0x58], dl
        mov edx, dword ptr ds : [eax+4]
        mov byte ptr ds : [edx+0x58], bl
        mov ecx, dword ptr ds : [ecx+8]
        mov byte ptr ds : [ecx+0x58], bl
        mov ecx, dword ptr ds : [eax+4]
        mov edx, dword ptr ds : [ecx+8]
        mov esi, dword ptr ds : [edx]
        mov dword ptr ds : [ecx+8], esi
        mov esi, dword ptr ds : [edx]
        cmp esi, dword ptr ds : [edi+8]
        je public_420ad6
        mov dword ptr ds : [esi+4], ecx
        public_420ad6 : nop
        mov esi, dword ptr ds : [ecx+4]
        mov dword ptr ds : [edx+4], esi
        mov esi, dword ptr ds : [edi+4]
        cmp ecx, dword ptr ds : [esi+4]
        jne public_420aee
        mov dword ptr ds : [esi+4], edx
        mov dword ptr ds : [edx], ecx
        jmp public_420ba4
        public_420aee : nop
        mov esi, dword ptr ds : [ecx+4]
        cmp ecx, dword ptr ds : [esi]
        jne public_420afe
        mov dword ptr ds : [esi], edx
        mov dword ptr ds : [edx], ecx
        jmp public_420ba4
        public_420afe : nop
        mov dword ptr ds : [esi+8], edx
        mov dword ptr ds : [edx], ecx
        jmp public_420ba4
        public_420b08 : nop
        mov edx, dword ptr ds : [ecx]
        cmp byte ptr ds : [edx+0x58], bl
        jne public_420b56
        mov edx, dword ptr ds : [ecx+8]
        mov byte ptr ds : [edx+0x58], bl
        mov edx, dword ptr ds : [ecx+8]
        mov byte ptr ds : [ecx+0x58], 0
        mov esi, dword ptr ds : [edx]
        mov dword ptr ds : [ecx+8], esi
        mov esi, dword ptr ds : [edx]
        cmp esi, dword ptr ds : [edi+8]
        je public_420b2b
        mov dword ptr ds : [esi+4], ecx
        public_420b2b : nop
        mov esi, dword ptr ds : [ecx+4]
        mov dword ptr ds : [edx+4], esi
        mov esi, dword ptr ds : [edi+4]
        cmp ecx, dword ptr ds : [esi+4]
        jne public_420b3e
        mov dword ptr ds : [esi+4], edx
        jmp public_420b4c
        public_420b3e : nop
        mov esi, dword ptr ds : [ecx+4]
        cmp ecx, dword ptr ds : [esi]
        jne public_420b49
        mov dword ptr ds : [esi], edx
        jmp public_420b4c
        public_420b49 : nop
        mov dword ptr ds : [esi+8], edx
        public_420b4c : nop
        mov dword ptr ds : [edx], ecx
        mov dword ptr ds : [ecx+4], edx
        mov ecx, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [ecx]
        public_420b56 : nop
        mov edx, dword ptr ds : [eax+4]
        mov dl, byte ptr ds : [edx+0x58]
        mov byte ptr ds : [ecx+0x58], dl
        mov edx, dword ptr ds : [eax+4]
        mov byte ptr ds : [edx+0x58], bl
        mov ecx, dword ptr ds : [ecx]
        mov byte ptr ds : [ecx+0x58], bl
        mov ecx, dword ptr ds : [eax+4]
        mov edx, dword ptr ds : [ecx]
        mov esi, dword ptr ds : [edx+8]
        mov dword ptr ds : [ecx], esi
        mov esi, dword ptr ds : [edx+8]
        cmp esi, dword ptr ds : [edi+8]
        je public_420b7f
        mov dword ptr ds : [esi+4], ecx
        public_420b7f : nop
        mov esi, dword ptr ds : [ecx+4]
        mov dword ptr ds : [edx+4], esi
        mov esi, dword ptr ds : [edi+4]
        cmp ecx, dword ptr ds : [esi+4]
        jne public_420b92
        mov dword ptr ds : [esi+4], edx
        jmp public_420ba1
        public_420b92 : nop
        mov esi, dword ptr ds : [ecx+4]
        cmp ecx, dword ptr ds : [esi+8]
        jne public_420b9f
        mov dword ptr ds : [esi+8], edx
        jmp public_420ba1
        public_420b9f : nop
        mov dword ptr ds : [esi], edx
        public_420ba1 : nop
        mov dword ptr ds : [edx+8], ecx
        public_420ba4 : nop
        mov dword ptr ds : [ecx+4], edx
        public_420ba7 : nop
        mov esi, dword ptr ss : [esp+0x10]
        mov byte ptr ds : [eax+0x58], bl
        public_420bae : nop
        lea ecx, ds:[esi+0xC]
        call public_420cb0
        push esi
        call public_5b7e1d
        mov eax, dword ptr ds : [edi+0x10]
        mov edx, dword ptr ss : [esp+0x20]
        add esp, 4
        dec eax
        mov dword ptr ds : [edi+0x10], eax
        mov eax, dword ptr ss : [esp+0x18]
        pop edi
        pop esi
        pop ebp
        mov dword ptr ds : [eax], edx
        pop ebx
        pop ecx
        ret 8
        UNREACHABLE_TRAP(0x420800)
    }
}

#undef public_420824
#undef public_420842
#undef public_42084d
#undef public_420856
#undef public_420861
#undef public_42087d
#undef public_420894
#undef public_4208a1
#undef public_4208ac
#undef public_4208af
#undef public_4208c7
#undef public_4208d2
#undef public_4208d5
#undef public_4208ea
#undef public_4208f5
#undef public_420900
#undef public_420903
#undef public_420917
#undef public_420923
#undef public_42092f
#undef public_420932
#undef public_420950
#undef public_42098f
#undef public_4209a2
#undef public_4209ad
#undef public_4209b0
#undef public_4209bb
#undef public_4209ce
#undef public_4209f5
#undef public_420a0f
#undef public_420a35
#undef public_420a48
#undef public_420a55
#undef public_420a57
#undef public_420a62
#undef public_420a79
#undef public_420a91
#undef public_420a9e
#undef public_420aa0
#undef public_420aac
#undef public_420ad6
#undef public_420aee
#undef public_420afe
#undef public_420b08
#undef public_420b2b
#undef public_420b3e
#undef public_420b49
#undef public_420b4c
#undef public_420b56
#undef public_420b7f
#undef public_420b92
#undef public_420b9f
#undef public_420ba1
#undef public_420ba4
#undef public_420ba7
#undef public_420bae
